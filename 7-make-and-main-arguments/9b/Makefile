all: physicsSimulator.exe chemistrySimulator.exe

physicsSimulator.exe: maths.o physicsSimulator.c
	gcc physicsSimulator.c maths.o -o physicsSimulator.exe
	.\physicsSimulator.exe

chemistrySimulator.exe: maths.o strings.o chemistrySimulator.c
	gcc chemistrySimulator.c maths.o strings.o -o chemistrySimulator.exe
	.\chemistrySimulator.exe

#this is a comment
maths.o: maths.c maths.h
	gcc -c maths.c -o maths.o

strings.o: strings.c strings.h
	gcc -c strings.c -o strings.o

clean:
	del physicsSimulator.exe maths.o