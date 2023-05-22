#include <stdio.h>
#include <stdlib.h>
#include "participant.h"
#include "fileUtil.h"
#include "date.h"

#define PARTICIPANTS_COUNT 5

int main(void) {

    Participant participants[PARTICIPANTS_COUNT] = {
        {.number = 5, .time= 304, .firstname="Ivan", .surname="Ivanov"},
        {.number = 3, .time= 605, .firstname="Lilia", .surname="Nikolova"},
        {.number = 1, .time= 903, .firstname="Nikola", .surname="Vladislavov"},
        {.number = 15, .time= 1231, .firstname="Dimitar", .surname="Yordanov"},
        {.number = 53, .time= 5324, .firstname="Yoana", .surname="Valerieva"},
    };

    Date date = {
        .day = 22,
        .month = 5,
        .year = 2023
    };

    //w => wb, r => rb, a => ab, w+ => wb+, r+ => rb+, a+ => ab+
    FILE * outputFile = fopen("maraton.bin", "wb");
    ASSERT_OPEN_FILE(outputFile);

    int participantsCount = PARTICIPANTS_COUNT;
    //Write the participants count
    fwrite(&participantsCount, sizeof(int), 1, outputFile);

    //Write participants
    fwrite(participants, sizeof (Participant), participantsCount, outputFile);

    //Write the date
    fwrite(&date, sizeof(Date), 1, outputFile);

    fclose(outputFile);

    return 0;
}