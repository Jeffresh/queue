CXX = clang++
OBJS = isomorficas.cpp

all: main

main: $(OBJS)
	$(CXX) $(OBJS)  -o iso

clean:
	-rm -f *.o core *.core