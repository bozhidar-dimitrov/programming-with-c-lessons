all: tests.out

tests.out: tests.c LinkedList.o
	gcc tests.c LinkedList.o -o tests.out

LinkedList.o: LinkedList.c LinkedList.h
	gcc -c LinkedList.c -o LinkedList.o

clean:
	rm -f *.o *.out