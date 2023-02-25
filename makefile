all:    test

test: testprogram.o func.o
	g++ -o test.e testprogram.o func.o

func.o: func.cpp func.h
	g++ -c func.cpp

testprogram.o: testprogram.cpp
	g++ -c testprogram.cpp

clean :
	rm *.o test.e


