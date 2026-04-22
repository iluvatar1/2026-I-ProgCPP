
main_derivs.x: main_derivs.cpp numericalCalculus.o main_derivs.o
	g++ -std=c++23 numericalCalculus.o main_derivs.o -o $@

%.o: %.cpp
	g++ -std=c++23 -c $<

clean: 
	rm -f *.x *.o a.out