main.out: main.c module.o
	gcc main.c module.o -o main.out 

module.o: module.h module.c
	gcc -c module.c -o module.o

clean:
	rm *.o *.out 