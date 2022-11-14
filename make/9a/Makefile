main.out: main.c maths.o
	gcc main.c maths.o -o main.out

maths.o: maths.c maths.h
	gcc -c maths.c -o maths.o

clean:
	rm -f *.o *.out
