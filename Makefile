order ?= 12
ORDERFLAG = -DORDER=$(order)

CXXFLAGS +=-g -fopenmp -fstrict-aliasing -march=native -mtune=native -O0 -std=c++14 -m64
LINKFLAGS+=-fopenmp -O3 -march=native -mtune=native -flto
ISPCFLAGS+=-g -O3 --arch=x86-64 --target=host --opt=fast-math -wno-perf

CXXFLAGS +=$(ORDERFLAG)
ISPCFLAGS+=$(ORDERFLAG)

ISPC=ispc
CXX=g++

ifeq ($(CXX),$(filter $(CXX),icc icpc))
	TBBPATH=/opt/intel/compilers_and_libraries_2016.2.146/mac/tbb
	CXXFLAGS+=-I$(TBBPATH)/include
	LINKFLAGS+=-L$(TBBPATH)/lib/ -ltbb -Wl,-rpath,$(TBBPATH)/lib/
endif

CXXFLAGS += -MP -MD

ISPC_FROM_M4_FILES = e2p.ispc p2e.ispc e2e.ispc e2l.ispc l2l.ispc l2p.ispc
ISPC_FILES = treekernels.ispc p2p.ispc
CPP_FILES = main.cpp tree.cpp treehelper.cpp tasksys.cpp fmm.cpp

ISPC_OBJ_FILES = $(patsubst %.ispc,%.ispco,$(ISPC_FILES) $(ISPC_FROM_M4_FILES))
ISPC_H_FILES   = $(patsubst %.ispco,%.h,$(ISPC_OBJ_FILES))
CPP_OBJ_FILES  = $(patsubst %.cpp,%.o,$(CPP_FILES))

all: fmm

ORDER: always_build
	@echo $(order) > $@.tmp
	@diff -q $@ $@.tmp &>/dev/null || cp $@.tmp $@
	@rm -f $@.tmp

fmm: $(ISPC_OBJ_FILES) $(CPP_OBJ_FILES)
	$(CXX) $(LINKFLAGS) $^ -o $@ 
	
%.o: %.cpp ORDER
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.ispco: %.ispc ORDER
	$(ISPC) $(ISPCFLAGS) $< -o $@ -MMM $(patsubst %.ispc,%.dtmp,$<) -h $(patsubst %.ispc,%.h,$<)
	@echo "$@: \\" > $(patsubst %.ispc,%.d,$<)
	@perl -n -e 'chop; print $$_, " "' $(patsubst %.ispc,%.dtmp,$<) >> $(patsubst %.ispc,%.d,$<)
	@echo "" >> $(patsubst %.ispc,%.d,$<)
	@rm -f $(patsubst %.ispc,%.dtmp,$<)

%.ispc: %.m4 ORDER
	m4 $(ORDERFLAG) $< > $@
	
%.cpp: %.m4 ORDER
	m4 $(ORDERFLAG) $< > $@

clean:
	rm -f *.o *.d $(ISPC_FROM_M4_FILES) *.ispco fmm
	

ifneq "$(MAKECMDGOALS)" "clean"
-include $(notdir $(patsubst %.cpp,%.d,$(CPP_FILES)))
-include $(notdir $(patsubst %.ispco,%.d,$(ISPC_OBJ_FILES)))
endif

.PRECIOUS: %.o %.ispco %.ispc %.cpp
.PHONY: always_build clean