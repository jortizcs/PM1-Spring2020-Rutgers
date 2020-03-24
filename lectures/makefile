all : time.o time2.o create.o time3.o
	g++ time.o main.cpp -o main
	g++ time2.o main2.cpp -o main2
	g++ -w create.o create_main.cpp -o create
	g++ -w time3.o main3.cpp -o main3

time.o : time.h time.cpp
	g++ -c time.cpp

time2.o : time2.h time2.cpp
	g++ -c time2.cpp

create.o : create.h create.cpp
	g++ -c create.cpp

time3.o : time3.h time3.cpp
	g++ -c time3.cpp

clean:
	rm -f *.o main main2 create main3
