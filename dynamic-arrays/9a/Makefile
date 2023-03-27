all: tests.out

tests.out: dynarr.o tests.c
	gcc tests.c dynarr.o -o tests.out

dynarr.o: dynarr.h dynarr.c
	gcc -c dynarr.c -o dynarr.o

clean:
	rm -f *.out *.o