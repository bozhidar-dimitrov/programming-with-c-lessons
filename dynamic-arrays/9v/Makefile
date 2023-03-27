all: tests.out

dynamicarr.o: dynamicarr.h dynamicarr.c
	gcc -c dynamicarr.c -o dynamicarr.o

tests.out: dynamicarr.o tests.c
	gcc tests.c dynamicarr.o -o tests.out 

clean:
	rm -f *.out *.o