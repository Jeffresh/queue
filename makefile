CXX = clang++ -std=c++17
OBJS1 =  tests.o
OBJS2 = invsec.o tests.o


v0.1: $(OBJS)
	$(CXX) $(OBJS1)  -o iso

v0.2: $(OBJS2)
	$(CXX) $(OBJS2) -o invsec

clean:
	-rm -f *.o core *.core
