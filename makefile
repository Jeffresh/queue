CXX = clang++
OBJS = tests.o

all: main

main: $(OBJS)
	$(CXX) $(OBJS)  -o iso

clean:
	-rm -f *.o core *.core
