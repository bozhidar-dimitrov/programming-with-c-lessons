all: writeParticipants.out readParticipants.out change.out

writeParticipants.out: writeParticipants.c participant.h participant.o
	gcc writeParticipants.c participant.o -o writeParticipants.out

readParticipants.out: readParticipants.c participant.h participant.o
	gcc readParticipants.c participant.o -o readParticipants.out

change.out: change.c participant.h participant.o
	gcc change.c participant.o -o change.out

participant.o: participant.h participant.c
	gcc -c participant.c -o participant.o

clean:
	rm -f *.out *.o