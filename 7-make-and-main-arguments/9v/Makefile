all: main.out program.out

main.out: maths.o main.c strings.o
	gcc main.c maths.o strings.o -o main.out

program.out: program.c strings.o
	gcc program.c strings.o -o program.out

maths.o: maths.c maths.h
	gcc -c maths.c -o maths.o

strings.o: strings.c strings.h
	gcc -c strings.c -o strings.o

clean: 
	rm -f *.o *.out