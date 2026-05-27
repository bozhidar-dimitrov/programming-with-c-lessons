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

  Date date;
  fread(&date, sizeof(Date), 1, file);

  int participantsCount;
  fread(&participantsCount, sizeof(participantsCount), 1, file);

  Participant * participants = (Participant *)calloc(participantsCount, sizeof(Participant));
  if (participants == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  }
  fread(participants, sizeof(Participant), participantsCount, file);

  printDate(&date);
  printParticipants(participants, participantsCount);

  fclose(file);

  return 0;
}