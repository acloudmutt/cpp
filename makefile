all:    test

test: testprogram.o func.o utility_functions.o
	g++ -o test.e testprogram.o func.o utility_functions.o

func.o: func.cpp func.h
	g++ -c func.cpp

utility_functions.o: utility_functions.cpp utility_functions.h
	g++ -c utility_functions.cpp

testprogram.o: testprogram.cpp
	g++ -c testprogram.cpp

clean :
	rm *.o test.e


