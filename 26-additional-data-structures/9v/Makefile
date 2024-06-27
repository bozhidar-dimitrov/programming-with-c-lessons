all: tests.out stackTests.out queueTests.out

linkedlist.o: linkedlist.h linkedlist.c
	gcc -c linkedlist.c -o linkedlist.o

tests.out: linkedlist.o tests.c
	gcc tests.c linkedlist.o -o tests.out

stack.o: stack.h stack.c
	gcc -c stack.c -o stack.o

stackTests.out: stack.o linkedlist.o stackTests.c
	gcc stackTests.c stack.o linkedlist.o -o stackTests.out

queue.o: queue.h queue.c
	gcc -c queue.c -o queue.o

queueTests.out: queue.o linkedlist.o queueTests.c
	gcc queueTests.c queue.o linkedlist.o -o queueTests.out

clean:
	rm -f *.o *.out