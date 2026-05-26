#include <stdio.h>
#include <stdlib.h>

#include "Participant.h"
#include "Date.h"

#define PARTICIPANT_COUNT 3

int main(void) {

  Date date = {
    .day = 2,
    .month = 6,
    .year = 2025
  };

  Participant participants[PARTICIPANT_COUNT] = {
    {.number = 1, .name = "Anna", .timeInMinutes=65},
    {.number = 3, .name = "Valentin", .timeInMinutes=85},
    {.number = 7, .name = "Georgi", .timeInMinutes=55}
  };

  int participantCount = PARTICIPANT_COUNT;

  FILE * file = fopen("maraton.bin", "wb");
  if (file == NULL){
    printf("Error opening file \n");
    exit(1);
  }

  fwrite(&date, sizeof(Date), 1, file);
  fwrite(&participantCount, sizeof(int), 1, file);
  fwrite(participants, sizeof(Participant), participantCount, file);

  fclose(file);

  return 0;
}