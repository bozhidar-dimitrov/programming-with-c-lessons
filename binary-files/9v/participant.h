#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#define PARTICIPANT_NAME_LENGTH 40

typedef struct {
    int number;
    int time;
    char firstname[PARTICIPANT_NAME_LENGTH];
    char surname[PARTICIPANT_NAME_LENGTH];
} Participant;

void printParticipant(Participant participant);
void printParticipants(Participant participants[], int size);

#endif