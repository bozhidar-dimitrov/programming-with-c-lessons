#include <stdio.h>
#include <stdlib.h>

#include "Participant.h"
#include "Date.h"

int main(void) {

  FILE * file = fopen("maraton.bin", "rb");
  if (file == NULL) {
    printf("Error opening a file \n");
    exit(1);
  }

  Date date;
  int participantCount;

  fread(&date, sizeof(Date), 1, file);
  fread(&participantCount, sizeof(int), 1, file);

  Participant * participants = malloc(sizeof(Participant) * participantCount);
  if (participants == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }

  fread(participants, sizeof(Participant), participantCount, file);

  printDate(&date);
  printParticipants(participants, participantCount);

  free(participants);
  fclose(file);

  return 0;
}