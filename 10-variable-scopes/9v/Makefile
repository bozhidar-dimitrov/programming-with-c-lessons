globalVariables.out: globalVariables.c threads.o
	gcc globalVariables.c threads.o -o globalVariables.out

threads.o: threads.h threads.c
	gcc -c threads.c -o threads.o

clean:
	rm -f *.o *.out