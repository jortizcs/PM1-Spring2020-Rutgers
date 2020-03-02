all : problem3.o
	g++ problem3.o main_problem3.cpp -o mainp3

problem3.o : problem3.h problem3.cpp
	g++ -c problem3.cpp

clean:
	rm -f *.o mainp3
