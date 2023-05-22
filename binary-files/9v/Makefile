all: maratonOut.out maratonIn.out

maratonOut.out: maratonOut.c participant.h participant.o
	gcc maratonOut.c participant.o -o maratonOut.out

participant.o: participant.c participant.h
	gcc -c participant.c -o participant.o

maratonIn.out: maratonIn.c participant.h participant.o
	gcc maratonIn.c participant.o -o maratonIn.out

clean:
	rm -f *.out *.o