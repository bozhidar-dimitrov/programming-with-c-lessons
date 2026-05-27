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

  fseek(file, 0, SEEK_END);
  long cursorOffset = ftell(file);
  long sizeOfParticipants = cursorOffset - sizeof(Date);
  int participantsCount = sizeOfParticipants / sizeof(Participant);

  //rewind - returns the cursor at the beginning of the file
  //equivelent to: fseek(file, 0, SEEK_SET);
  rewind(file);
  Date date;
  fread(&date, sizeof(Date), 1, file);

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