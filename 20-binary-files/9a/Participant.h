#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include "types.h"

#define MAX_PARTICIPANT_NAME_LENGTH 100

typedef struct {
  uint number;
  uint timeInMinutes;
  char name[MAX_PARTICIPANT_NAME_LENGTH + 1];
} Participant;

void printParticipant(Participant * participant);
void printParticipants(Participant participants[], uint size);

#endif