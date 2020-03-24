all : time.o
	g++ time.o main.cpp -o main

problem3.o : time.h time.cpp
	g++ -c time.cpp

clean:
	rm -f *.o main
