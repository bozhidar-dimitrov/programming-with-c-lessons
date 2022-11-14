main.out: main.c maths.o strings.o
	gcc main.c maths.o strings.o -o main.out

maths.o: maths.c maths.h
	gcc -c maths.c -o maths.o

strings.o: strings.h strings.c
	gcc -c strings.c -o strings.o

clean:
	rm -f *.o *.out