#include <stdio.h>
#include <stdlib.h>

#include "Date.h"
#include "Participant.h"

int main(void) {

  FILE * file = fopen("maraton.bin", "rb+");
  if (file == NULL) {
    printf("Error opening a file \n");
    exit(1);
  }
  //SEEK_SET - offset from the beginning of the file
  //SEEK_CUR - offset from the cursor positon
  //SEEK_END - offset from the end of the file
  fseek(file, sizeof(Date) + sizeof(int), SEEK_SET);

  Participant participant;
  fread(&participant, sizeof(Participant), 1, file);

  Participant martin = {
    .name = "Martin",
    .number = 5,
    .timeInMinutes = 210
  };

  printParticipant(&participant);

  fseek(file, -sizeof(Participant), SEEK_CUR);
  fwrite(&martin, sizeof(Participant), 1, file);

  //Equivalent to: fseek(file, 0, SEEK_SET)
  rewind(file); //Returns the cursor at the beginning of the file

  fclose(file);

  return 0;
}