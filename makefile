exe: main.o Radical.o
	g++ main.o Radical.o
	rm *.o
main.o:	main.cpp Radical.h
	g++ -c main.cpp
Radical.o:	Radical.h Radical.cpp
	g++ -c Radical.cpp