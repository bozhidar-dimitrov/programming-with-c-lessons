#include <stdio.h>
#include <stdlib.h>
#include "participant.h"
#include "fileUtil.h"
#include "date.h"

#define PARTICIPANTS_COUNT 5

int main(void) {

    //w => wb, r => rb, a => ab, w+ => wb+, r+ => rb+, a+ => ab+
    FILE * inputFile = fopen("maraton.bin", "rb");
    ASSERT_OPEN_FILE(inputFile);

    int participantsCount = 0;
    fread(&participantsCount, sizeof(int), 1, inputFile);
    printf("Number of participants: %d\n", participantsCount);

    Participant * participants = (Participant *) malloc (participantsCount * sizeof(Participant));
    fread(participants, sizeof(Participant), participantsCount, inputFile);
    printParticipants(participants, participantsCount);

    Date date;
    fread(&date, sizeof(Date), 1, inputFile);
    printf("Date: %d.%d.%d\n", date.day, date.month, date.year);

    fclose(inputFile);

    return 0;
}