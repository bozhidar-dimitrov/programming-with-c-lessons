#include <stdio.h>
#include <stdlib.h>

#include "Date.h"
#include "Participant.h"

int main(void) {

  FILE * file = fopen("maraton.bin", "rb");
  if (file == NULL){
    printf("Error opening file \n");
    exit(1);
  }

  Date date;
  int participantsCount;

  fread(&date, sizeof(Date), 1, file);
  fread(&participantsCount, sizeof(int), 1, file);

  Participant * participants = malloc(sizeof(Participant) * participantsCount);
  if (participants == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }
  fread(participants, sizeof(Participant), participantsCount, file);

  printDate(&date);
  printParticipants(participants, participantsCount);

  free(participants);
  fclose(file);

  return 0;
}