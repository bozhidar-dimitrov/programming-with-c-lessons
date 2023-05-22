all: writeParticipants.out readParticipants.out changeParticipant.out

writeParticipants.out: date.h fileUtil.h participant.h participant.o writeParticipants.c
	gcc writeParticipants.c participant.o -o writeParticipants.out

readParticipants.out: date.h fileUtil.h participant.h participant.o readParticipants.c
	gcc readParticipants.c participant.o -o readParticipants.out

changeParticipant.out: date.h fileUtil.h participant.h participant.o changeParticipant.c
	gcc changeParticipant.c participant.o -o changeParticipant.out

participant.o: participant.h participant.c
	gcc -c participant.c -o participant.o

clean:
	rm -f *.o *.out