#include <stdio.h>
#include <stdlib.h>
#include "participant.h"
#include "fileUtil.h"
#include "date.h"

int main(void) {

    //r => rb, w => wb, a => ab, r+ => rb+, w+ => wb+, a+ => ab+
    FILE * outputFile = fopen("maraton.bin", "rb+");
    ASSERT_FILE_OPEN(outputFile);

    //SEEK_SET - from the beginning of the file
    //SEEK_CUR - from current cursor position
    //SEEK_END - from the end of the file
    fseek(outputFile, sizeof(int) + sizeof(Participant), SEEK_SET);

    Participant participant;
    fread(&participant, sizeof(Participant), 1, outputFile);
    printParticpant(&participant);

    Date date;
    fseek(outputFile, -sizeof(Date), SEEK_END);
    fread(&date, sizeof(Date), 1, outputFile);
    printf("Date: %d.%d.%d \n", date.day, date.month, date.year);

    date.day = 25;
    fseek(outputFile, -sizeof(Date), SEEK_CUR);
    fwrite(&date, sizeof(Date), 1, outputFile);

    //Returns the cursor to the beginning of the file
    //==fseek(outputFile, 0, SEEK_SET);
    rewind(outputFile);

    fclose(outputFile);

    return 0;
}