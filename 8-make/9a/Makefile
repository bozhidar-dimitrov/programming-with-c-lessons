all: main.out program.out

main.out: maths.o main.c strings.o maths.h strings.h
	gcc main.c maths.o strings.o -o main.out

program.out: strings.o program.c strings.h
	gcc program.c strings.o -o program.out

maths.o: maths.h maths.c
	gcc -c maths.c -o maths.o

strings.o: strings.c strings.h
	gcc -c strings.c -o strings.o

clean:
	rm -f *.out *.o