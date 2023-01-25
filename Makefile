main: main.o 
	g++ -o main main.o 

tests: tests.o
	g++ -o tests tests.o



main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main.o tests.o
