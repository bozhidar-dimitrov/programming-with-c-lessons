all: tests.out stacktests.out

linkedlist.o: linkedlist.h linkedlist.c
	gcc -c linkedlist.c -o linkedlist.o

tests.out: linkedlist.o tests.c
	gcc tests.c linkedlist.o -o tests.out

stack.o: stack.c stack.h
	gcc -c stack.c -o stack.o

stacktests.out: stack.o stacktests.c linkedlist.o
	gcc stacktests.c stack.o linkedlist.o -o stacktests.out

clean:
	rm -f *.o *.out