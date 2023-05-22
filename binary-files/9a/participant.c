#include <stdio.h>
#include "participant.h"

void printParticipant(Participant * participant) {
    printf("--------------------\n");
    printf("Number: %d\n", participant->number);
    printf("Name: %s %s\n", participant->firstname, participant->surname);
    printf("Time: %d\n", participant->time);
    printf("--------------------\n");
}

void printParticipants(Participant participants[], int size) {
    for(int i = 0; i < size; i++) {
        printParticipant(&participants[i]);
    }
}