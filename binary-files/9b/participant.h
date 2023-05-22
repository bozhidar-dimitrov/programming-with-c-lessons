#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#define PARTICIPANT_NAME_MAX_LENGTH 50

typedef struct {
    int number;
    int time;
    char firstname[PARTICIPANT_NAME_MAX_LENGTH];
    char surname[PARTICIPANT_NAME_MAX_LENGTH];
} Participant;

void printParticpant(Participant * participant);
void printParticipants(Participant participants[], int size);

#endif