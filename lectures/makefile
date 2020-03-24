all : time.o time2.o create.o
	g++ time.o main.cpp -o main
	g++ time2.o main2.cpp -o main2
	g++ -w create.o main3.cpp -o create

time.o : time.h time.cpp
	g++ -c time.cpp

time2.o : time2.h time2.cpp
	g++ -c time2.cpp

create.o : create.h create.cpp
	g++ -c create.cpp

clean:
	rm -f *.o main main2 create 
