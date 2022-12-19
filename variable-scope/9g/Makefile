main.out: main.c threads.o
	gcc main.c threads.o -o main.out

threads.o: threads.h threads.c
	gcc -c threads.c -o threads.o