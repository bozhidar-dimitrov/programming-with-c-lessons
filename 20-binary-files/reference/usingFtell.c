#include <stdio.h>
#include <stdlib.h>

#include "Date.h"
#include "Participant.h"

int main(void) {

  FILE * file = fopen("maraton.bin", "rb");
  if (file == NULL) {
    printf("Error opening a file \n");
    exit(1);
  }

  fseek(file, 0, SEEK_END);
  long fileSize = ftell(file);
  int participantsCount = (fileSize - sizeof(int) - sizeof(Date)) / sizeof(Participant);
  Participant * participants = malloc(sizeof(Participant) * participantsCount);
  if (participants == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }
  fseek(file, sizeof(int)+sizeof(Date), SEEK_SET);
  fread(participants, sizeof(Participant), participantsCount, file);
  printParticipants(participants, participantsCount);

  fclose(file);

  return 0;
}