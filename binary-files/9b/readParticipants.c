#include <stdio.h>
#include <stdlib.h>
#include "participant.h"
#include "fileUtil.h"
#include "date.h"

#define PARTICIPANT_COUNT 5

int main(void) {

    //r => rb, w => wb, a => ab, r+ => rb+, w+ => wb+, a+ => ab+
    FILE * outputFile = fopen("maraton.bin", "rb");
    ASSERT_FILE_OPEN(outputFile);

    int particpantCount;
    fread(&particpantCount, sizeof(int), 1, outputFile);
    printf("Participants count: %d \n", particpantCount);

    Participant * participants = (Participant *) malloc(particpantCount * sizeof(Participant));
    fread(participants, sizeof(Participant), particpantCount, outputFile);
    printParticipants(participants, particpantCount);

    Date date;
    fread(&date, sizeof(Date), 1, outputFile);
    printf("Date: %d.%d.%d \n", date.day, date.month, date.year);

    fclose(outputFile);

    return 0;
}