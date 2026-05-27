#include <stdio.h>
#include <stdlib.h>

#include "Date.h"
#include "Participant.h"

int main(void) {

  FILE * file = fopen("maratonV2.bin", "rb");
  if (file == NULL) {
    printf("Error opening a file. \n");
    exit(1);
  }
  
  fseek(file, 0, SEEK_END);
  long offset = ftell(file);
  long participantsSize = offset - sizeof(Date);
  int participantCount = participantsSize / sizeof(Participant);

  rewind(file);
  Date date;
  fread(&date, sizeof(Date), 1, file);

  Participant * participants = malloc(sizeof(Participant) * participantCount);
  if (participants == NULL) {
    printf("Error allocating memory \n");
    exit(1);
  } 
  fread(participants, sizeof(Participant), participantCount, file);

  printDate(&date);
  printParticipants(participants, participantCount);

  fclose(file);

  return 0;
}