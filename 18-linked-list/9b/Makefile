all: tests.out

LinkedList.o: LinkedList.h LinkedList.c
	gcc -c LinkedList.c -o LinkedList.o

tests.out: tests.c LinkedList.o
	gcc tests.c LinkedList.o -o tests.out

clean:
	rm -f *.o *.out