globalvariables.out: threads.o threads.h globalvariables.c
	gcc globalvariables.c threads.o -o globalvariables.out

threads.o: threads.h threads.c
	gcc -c threads.c -o threads.o