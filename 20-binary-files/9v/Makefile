all: readParticipants.out writeParticipants.out modifyParticipants.out usingFtell.out writeParticipantsWithoutCount.out readOneAtATime.out

readParticipants.out: readParticipants.c Date.o Participant.o
	gcc readParticipants.c Date.o Participant.o -o readParticipants.out

writeParticipants.out: writeParticipants.c Date.o Participant.o
	gcc writeParticipants.c Date.o Participant.o -o writeParticipants.out

writeParticipantsWithoutCount.out: writeParticipantsWithoutCount.c Date.o Participant.o
	gcc writeParticipantsWithoutCount.c Date.o Participant.o -o writeParticipantsWithoutCount.out

modifyParticipants.out: modifyParticipants.c Date.o Participant.o
	gcc modifyParticipants.c Date.o Participant.o -o modifyParticipants.out

usingFtell.out: usingFtell.c Date.o Participant.o
	gcc usingFtell.c Date.o Participant.o -o usingFtell.out

readOneAtATime.out: readOneAtATime.c Date.o Participant.o
	gcc readOneAtATime.c Date.o Participant.o -o readOneAtATime.out

Date.o: Date.c Date.h
	gcc -c Date.c -o Date.o

Participant.o: Participant.c Participant.h
	gcc -c Participant.c -o Participant.o

clean:
	rm -f *.o *.out

