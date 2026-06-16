all: tests.out

LinkedList.o: LinkedList.h LinkedList.c
	gcc -c LinkedList.c -o LinkedList.o

stack.o: stack.c LinkedList.o
	gcc -c stack.c LinkedList.o -o stack.o

tests.out: tests.c stack.o
	gcc tests.c stack.o -o tests.out

clean:
	rm -f *.o *.out