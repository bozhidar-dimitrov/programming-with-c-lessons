#include <stdio.h>
#include <stdlib.h>
#include "participant.h"

int main() {

    FILE * file;
    file = fopen("maraton.bin", "rb");
    if (file == NULL) {
        printf("Cannot open file \n");
        exit(1);
    }

    int participantsCount = 0;
    fread(&participantsCount, sizeof(int), 1, file);

    Participant * participants = (Participant * ) calloc(participantsCount, sizeof(Participant));
    
    fread(participants, sizeof(Participant), participantsCount, file);
    printParticipants(participants, participantsCount);
    fclose(file);

    return 0;
}