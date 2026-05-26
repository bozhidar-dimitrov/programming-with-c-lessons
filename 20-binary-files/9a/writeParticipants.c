#include <stdio.h>
#include <stdlib.h>

#include "Participant.h"
#include "Date.h"

#define PARTICIPANT_COUNT 3

int main(void) {

  Date date = {
    .day = 26,
    .month = 5,
    .year = 2026
  };

  Participant participants[PARTICIPANT_COUNT] = {
    {
      .number = 67,
      .name = "Martin",
      .timeInMinutes = 360
    },
    {
      .number = 420,
      .name = "Branimir",
      .timeInMinutes = 359
    },
    {
      .number = 1,
      .name = "Melani",
      .timeInMinutes = 359
    }
  };

  FILE * file = fopen("maraton.bin", "wb");
  if (file == NULL) {
    printf("Error opening a file \n");
    exit(1);
  }

  fwrite(&date, sizeof(Date), 1, file);
  int participantCount = PARTICIPANT_COUNT;
  fwrite(&participantCount, sizeof(int), 1, file);
  fwrite(participants, sizeof(Participant), participantCount, file);

  fclose(file);

  return 0;
}