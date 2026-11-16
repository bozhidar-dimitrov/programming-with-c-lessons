physicsSimulator.exe: maths.o physicsSimulator.c
	gcc physicsSimulator.c maths.o -o physicsSimulator.exe
	.\physicsSimulator.exe

#this is a comment
maths.o: maths.c maths.h
	gcc -c maths.c -o maths.o

clean:
	del physicsSimulator.exe maths.o