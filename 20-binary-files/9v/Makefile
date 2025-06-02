all: readParticipants.out writeParticipants.out

readParticipants.out: readParticipants.c Date.o Participant.o
	gcc readParticipants.c Date.o Participant.o -o readParticipants.out

writeParticipants.out: writeParticipants.c Date.o Participant.o
	gcc writeParticipants.c Date.o Participant.o -o writeParticipants.out

Date.o: Date.c Date.h
	gcc -c Date.c -o Date.o

Participant.o: Participant.c Participant.h
	gcc -c Participant.c -o Participant.o

clean:
	rm -f *.o *.out

