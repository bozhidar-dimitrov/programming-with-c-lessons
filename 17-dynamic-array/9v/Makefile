all: tests.out

tests.out: tests.c DynamicArray.o
	gcc tests.c DynamicArray.o -o tests.out

DynamicArray.o: DynamicArray.h DynamicArray.c
	gcc -c DynamicArray.c -o DynamicArray.o

clean:
	rm -f *.out *.o