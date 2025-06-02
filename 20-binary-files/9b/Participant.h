#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include "types.h"

#define PARTICIPANT_NAME_MAX_LENGTH 100

typedef struct {
  uint number;
  char name[PARTICIPANT_NAME_MAX_LENGTH + 1];
  uint timeInMinutes;
} Participant;

void printParticipant(Participant * participant);
void printParticipants(Participant participants[], uint size);

#endif