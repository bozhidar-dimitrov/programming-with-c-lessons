#include "Participant.h"
#include <stdio.h>

void printParticipant(Participant * participant) {
  printf("-----------------------------------\n");
  printf("Number: %u\n", participant->number);
  printf("Name: %s\n", participant->name);
  printf("Time: %u\n", participant->timeInMinutes);
  printf("-----------------------------------\n");
}

void printParticipants(Participant participants[], uint size) {
  for (uint i = 0; i < size; i++) {
    printParticipant(&participants[i]);
  }
}