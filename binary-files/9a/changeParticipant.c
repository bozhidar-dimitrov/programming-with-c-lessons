#include <stdio.h>
#include <stdlib.h>
#include "participant.h"
#include "fileUtil.h"
#include "date.h"

#define PARTICIPANTS_COUNT 5

int main(void) {
    FILE * inputFile = fopen("maraton.bin", "rb+");
    ASSERT_OPEN_FILE(inputFile);

    //SEEK_SET -> from beginning of the file
    //SEEK_CUR -> from current position of the file
    //SEEK_END -> from the end of the file
    fseek(inputFile, sizeof(int) + sizeof(Participant), SEEK_SET);

    Participant participant;
    fread(&participant, sizeof(Participant), 1, inputFile);
    printParticipant(&participant);

    Date date;
    fseek(inputFile, -sizeof(Date), SEEK_END);
    fread(&date, sizeof(Date), 1, inputFile);
    printf("Date: %d.%d.%d\n", date.day, date.month, date.year);
    
    date.day = 25;
    fseek(inputFile, -sizeof(Date), SEEK_CUR);
    fwrite(&date, sizeof(Date), 1, inputFile);

    fclose(inputFile);

    return 0;
}