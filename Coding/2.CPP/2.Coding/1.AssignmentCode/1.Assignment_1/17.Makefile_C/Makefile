main: main.o sqrt.o pow.o factorial.o square.o cube.o
	gcc -o main main.o sqrt.o pow.o factorial.o square.o cube.o

main.o:	main.c
	gcc -c main.c -o main.o

sqrt.o: sqrt.c	
	gcc -c sqrt.c -o sqrt.o
	
pow.o: pow.c	
	gcc -Wall -c pow.c -o pow.o

factorial.o: factorial.c	
	gcc -c factorial.c -o factorial.o

square.o: square.c	
	gcc -c square.c -o square.o

cube.o:	cube.c
	gcc -c cube.c -o cube.o