all : time.o time2.o
	g++ time.o main.cpp -o main
	g++ time2.o main2.cpp -o main2

time.o : time.h time.cpp
	g++ -c time.cpp

time2.o : time2.h time2.cpp
	g++ -c time2.cpp
clean:
	rm -f *.o main main2
