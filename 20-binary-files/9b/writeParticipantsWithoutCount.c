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
      .timeInMinutes = 280
    },
    {
      .number = 1706,
      .name = "Boris",
      .timeInMinutes = 279
    },
    {
      .number = 8,
      .name = "Boyan",
      .timeInMinutes = 281
    }
  };

  FILE * file = fopen("maratonV2.bin", "wb");
  if (file == NULL) {
    printf("Error opening a file. \n");
    exit(1);
  }

  fwrite(&date, sizeof(Date), 1, file);
  int participantCount = PARTICIPANT_COUNT;
  fwrite(participants, sizeof(Participant), participantCount, file);
  
  fclose(file);

  return 0;
}