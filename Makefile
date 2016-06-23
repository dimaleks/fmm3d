order ?= 12
bmi2 ?= 0
ORDERFLAG = -DORDER=$(order)

CXXFLAGS +=-g -fopenmp -fstrict-aliasing -march=native -mtune=native -O3 -std=c++11 -m64
LINKFLAGS+=-fopenmp -O3 -march=native -mtune=native 
ISPCFLAGS+=-g -O3 --arch=x86-64 --target=host -wno-perf

CXXFLAGS +=$(ORDERFLAG)
ISPCFLAGS+=$(ORDERFLAG)

ISPC=ispc
CXX=g++

ifeq ($(CXX),$(filter $(CXX),icc icpc))
	TBBPATH=/opt/intel/compilers_and_libraries_2016.2.146/mac/tbb
	CXXFLAGS+=-I$(TBBPATH)/include
	LINKFLAGS+=-L$(TBBPATH)/lib/ -ltbb -Wl,-rpath,$(TBBPATH)/lib/
endif

ifeq ($(bmi2), 1)
	CXXFLAGS+=-D_BMI2_
endif

CPP_FILES = main.cpp tree.cpp treehelper.cpp tasksys.cpp
OBJ_FILES = main.o tree.o treehelper.o treekernels.ispco kernels.ispco tasksys.o

all: fmm

fmm: $(OBJ_FILES)
	$(CXX) $(LINKFLAGS) $^ -o $@ 
	
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.ispco: %.ispc
	$(ISPC) $(ISPCFLAGS) $< -o $@

kernels.ispc: kernels.m4
	m4 $(ORDERFLAG) kernels.m4 > kernels.ispc

clean:
	rm -f *.o *.d kernels.ispc *.ispco kernels.cpp fmm
	

ifneq "$(MAKECMDGOALS)" "clean"
-include $(notdir $(patsubst %.cpp,%.d,$(CPP_FILES)))
endif