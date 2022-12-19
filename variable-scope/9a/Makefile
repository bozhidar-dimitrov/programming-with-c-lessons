main.out: main.c thread.o
	gcc main.c thread.o -o main.out

thread.o: thread.h thread.c
	gcc -c thread.c -o thread.o

clean:
	rm -f *.o *.out