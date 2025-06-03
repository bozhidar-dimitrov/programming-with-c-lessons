#include <stdio.h>

#include "Participant.h"
#include "Date.h"
#include "fileUtil.h"

int main(void) {

  FILE * file = fopen("maraton.bin", "rb+");
  CHECK_FILE_OPEN(file);

  //SEEK_SET - offset from the beginning of the file
  //SEEK_CUR - offset from the current position of the cursor
  //SEEK_END - offset from the end of the file
  fseek(file, sizeof(Date) + sizeof(int), SEEK_SET);

  Participant participant;
  fread(&participant, sizeof(Participant), 1, file);

  printParticipant(&participant);

  Participant dara = {
    .number = 5,
    .name = "Dara",
    .timeInMinutes = 240
  };

  fseek(file, -sizeof(Participant), SEEK_CUR);
  fwrite(&dara, sizeof(Participant), 1, file);

  //Equivelent to fseek(file, 0, SEEK_SET);
  rewind(file); //Returns the cursor at the beginning of the file

  fclose(file);

  return 0;
}