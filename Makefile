order ?= 10
fast-e2l ?= 0
ORDERFLAG = -DORDER=$(order)

CXXFLAGS +=-g -fopenmp -fno-strict-aliasing -march=native -mtune=native -O3 -std=c++14 -m64 -fPIC
LINKFLAGS+=-fopenmp -O3 -march=native -mtune=native -flto
ISPCFLAGS+=-g -O3 --arch=x86-64 --target=host --opt=fast-math -wno-perf --pic 

CXXFLAGS +=$(ORDERFLAG)
ISPCFLAGS+=$(ORDERFLAG)

ISPC=ispc
CXX=g++

ifeq ($(CXX),$(filter $(CXX),icc icpc))
	TBBPATH=/opt/intel/compilers_and_libraries_2016.2.146/mac/tbb
	CXXFLAGS+=-I$(TBBPATH)/include
	LINKFLAGS+=-L$(TBBPATH)/lib/ -ltbb -Wl,-rpath,$(TBBPATH)/lib/
endif

ifneq (,$(findstring clang,$(CXX)))
	OMPPATH=/usr/local/Cellar/libiomp/20150701
	CXXFLAGS+=-I$(OMPPATH)/include/libiomp/
	LINKFLAGS+=-L$(OMPPATH)/lib/ -Wl,-rpath,$(OMPPATH)/lib/
endif

ifneq ($(fast-e2l), 0)
	E2LFLAG = -DE2L_SLOOOW_COMPILE
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

fmm: libfmm.so main.o
	$(CXX) $(LINKFLAGS) -L./ main.o -lfmm -Wl,-rpath=./ -o $@

libfmm.so: $(ISPC_OBJ_FILES) $(filter-out main.o,$(CPP_OBJ_FILES))	
	$(CXX) $(LINKFLAGS) -shared -Wl,-soname,$@ $^ -o $@ 

$(CPP_OBJ_FILES): $(ISPC_H_FILES)
*.ispc *.o *.ispco: ORDER

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.ispco %.h: %.ispc
	$(ISPC) $(ISPCFLAGS) $< -o $@ -MMM $(patsubst %.ispc,%.dtmp,$<) -h $(patsubst %.ispc,%.h,$<)
	@echo "$@: \\" > $(patsubst %.ispc,%.d,$<)
	@perl -n -e 'chop; print $$_, " "' $(patsubst %.ispc,%.dtmp,$<) >> $(patsubst %.ispc,%.d,$<)
	@echo "" >> $(patsubst %.ispc,%.d,$<)
	@rm -f $(patsubst %.ispc,%.dtmp,$<)

%.ispc: %.m4
	m4 $(ORDERFLAG) $(E2LFLAG) $< > $@

clean:
	rm -f *.o
	rm -f *.d
	rm -f $(ISPC_FROM_M4_FILES)
	rm -f $(ISPC_H_FILES)
	rm -f *.ispco
	rm -f fmm
	

ifneq "$(MAKECMDGOALS)" "clean"
-include $(notdir $(patsubst %.cpp,%.d,$(CPP_FILES)))
-include $(notdir $(patsubst %.ispco,%.d,$(ISPC_OBJ_FILES)))
endif

.PRECIOUS: %.o %.ispco %.ispc %.cpp %.h
.PHONY: always_build clean
