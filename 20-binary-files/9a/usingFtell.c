#include <stdio.h>
#include <stdlib.h>

#include "Date.h"
#include "Participant.h"

int main(void) {

  FILE * file = fopen("maratonV2.bin", "rb");
  if (file == NULL) {
    printf("Error opening a file \n");
    exit(1);
  }

  Date date;
  fread(&date, sizeof(Date), 1, file);

  //ftell - how much byte the cursor is from the beginning of the file
  fseek(file, 0, SEEK_END);
  long fileBytes = ftell(file);
  long participantsBytes = fileBytes - sizeof(Date);
  long participantCount = participantsBytes / sizeof(Participant);

  Participant * participants = malloc(sizeof(Participant) * participantCount);
  if (participants == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  }

  fseek(file, sizeof(Date), SEEK_SET);
  fread(participants, sizeof(Participant), participantCount, file);

  printDate(&date);
  printParticipants(participants, participantCount);

  fclose(file);

  return 0;
}