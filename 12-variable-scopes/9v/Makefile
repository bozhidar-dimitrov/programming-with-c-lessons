main.out: threads.o threads.h main.c
	gcc main.c threads.o -o main.out

threads.o: threads.h threads.c
	gcc -c threads.c -o threads.o