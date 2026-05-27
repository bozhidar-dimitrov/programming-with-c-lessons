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

  Participant * participants = NULL;
  Participant participant;
  
  int participantsCount = 0;
  while (fread(&participant, sizeof(Participant), 1, file) == 1) {
    Participant * temp = realloc(participants, (participantsCount+1) * sizeof(Participant));
    if (temp == NULL) {
      printf("Error allocating memory \n");
      free(participants);
      exit(1);
    }
    participants = temp;
    participants[participantsCount] = participant;
    participantsCount++;
  }

  printDate(&date);
  printParticipants(participants, participantsCount);

  fclose(file);

  return 0;
}