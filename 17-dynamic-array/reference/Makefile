all: tests.out

tests.out: tests.c DynamicArray.o
	gcc tests.c DynamicArray.o -o tests.out

DynamicArray.o: DynamicArray.c DynamicArray.h util.h
	gcc -c DynamicArray.c -o DynamicArray.o

clean:
	rm -f *.o *.out