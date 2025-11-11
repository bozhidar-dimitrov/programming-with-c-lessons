all: main.out program.out

main.out: maths.o strings.o main.c
	gcc main.c maths.o strings.o -o main.out
	./main.out

program.out: strings.o program.c
	gcc program.c strings.o -o program.out
	./program.out

maths.o: maths.h maths.c
	gcc -c maths.c -o maths.o

strings.o: strings.h strings.c
	gcc -c strings.c -o strings.o

clean:
	rm -f *.o *.out