#include <stdio.h>
#include <stdlib.h>
#include "participant.h"

int main() {

    FILE * file;
    file = fopen("maraton.bin", "rb+");
    if (file == NULL) {
        printf("Cannot open file \n");
        exit(1);
    }

    Participant participant;
    //SEEK_SET - from file start
    //SEEK_CUR - from current cursor
    //SEEK_END - from end of file
    //offset can be negative number
    fseek(file, sizeof(int) + sizeof(Participant), SEEK_SET);
    fread(&participant, sizeof(Participant), 1, file);
    printParticipant(participant);

    //Reterns the cursor to the beginning of the file
    //rewind(file)

    return 0;
}