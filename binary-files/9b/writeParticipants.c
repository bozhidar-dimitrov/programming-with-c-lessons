#include <stdio.h>
#include <stdlib.h>
#include "participant.h"
#include "fileUtil.h"
#include "date.h"

#define PARTICIPANT_COUNT 5

int main(void) {

    int particpantCount = PARTICIPANT_COUNT;

    Participant participants[PARTICIPANT_COUNT] = {
        {.number = 5, .time = 330, .firstname="Ivan", .surname="Patkov"},
        {.number = 3, .time = 679, .firstname="Maria", .surname="Nikolova"},
        {.number = 1, .time = 1023, .firstname="Lilia", .surname="Dimitrova"},
        {.number = 9, .time = 3432, .firstname="Nikola", .surname="Ivanov"},
        {.number = 2, .time = 4023, .firstname="Petyr", .surname="Georgiev"}
    };

    Date maratonDate = {
        .day = 22,
        .month = 5,
        .year = 2023
    };

    //r => rb, w => wb, a => ab, r+ => rb+, w+ => wb+, a+ => ab+
    FILE * outputFile = fopen("maraton.bin", "wb");
    ASSERT_FILE_OPEN(outputFile);

    //Write participantCount in the binary file
    fwrite(&particpantCount, sizeof(int), 1, outputFile);

    //Write participants in the binary file
    fwrite(participants, sizeof(Participant), particpantCount, outputFile);

    //Write maratonDate in binary file
    fwrite(&maratonDate, sizeof(Date), 1, outputFile);

    fclose(outputFile);

    return 0;
}