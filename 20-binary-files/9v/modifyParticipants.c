#include <stdio.h>
#include <stdlib.h>

#include "Participant.h"
#include "Date.h"

int main(void) {

  FILE * file = fopen("maraton.bin", "rb+");
  if (file == NULL) {
    printf("Error opening a file \n");
    exit(1);
  }

  /**
   * fseek whence:
   * SEEK_SET - from the beginning of the file
   * SEEK_CUR - from the current position of the cursor
   * SEEK_END - from the end of the file
   */
  fseek(file, sizeof(Date) + sizeof(int), SEEK_SET);

  Participant firstParticipant;
  fread(&firstParticipant, sizeof(Participant), 1, file);

  printParticipant(&firstParticipant);

  fseek(file, -sizeof(Participant), SEEK_CUR);

  Participant newParticipant = {
    .number = 1,
    .name = "Siyana Ilievska",
    .timeInMinutes = 530
  };

  fwrite(&newParticipant, sizeof(Participant), 1, file);

  fclose(file);

  return 0;
}