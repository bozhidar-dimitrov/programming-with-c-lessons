#include <stdio.h>

#include "Participant.h"
#include "Date.h"
#include "fileUtil.h"

#define PARTICIPANTS_COUNT 3

int main(void) {

  int participantCount;
  Date date;

  FILE * file = fopen("maraton.bin", "rb");
  CHECK_FILE_OPEN(file);

  fread(&date, sizeof(Date), 1, file);
  fread(&participantCount, sizeof(int), 1, file);

  Participant * participants = malloc(participantCount * sizeof(Participant));
  if (participants == NULL) {
    printf("Error allocating memory \n");
    exit;
  }

  fread(participants, sizeof(Participant), participantCount, file);

  printDate(&date);
  printParticipants(participants, participantCount);

  free(participants);
  fclose(file);

  return 0;
}