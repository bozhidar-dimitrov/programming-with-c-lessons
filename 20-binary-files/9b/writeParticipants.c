#include <stdio.h>
#include <stdlib.h>

#define PARTICIPANT_COUNT 3

#include "Date.h"
#include "Participant.h"

int main(void) {

  Date date = {
    .day = 2,
    .month = 6,
    .year = 2025
  };

  int particpantCount = PARTICIPANT_COUNT;

  Participant participants[PARTICIPANT_COUNT] = {
    {.number = 1, .name = "Anna", .timeInMinutes = 240},
    {.number = 4, .name = "Teodor", .timeInMinutes = 300},
    {.number = 8, .name = "Kepchoge", .timeInMinutes = 110}
  };

  FILE * file = fopen("maraton.bin", "wb");
  if (file == NULL) {
    printf("Error opening a file \n");
    exit(1);
  }

  fwrite(&date, sizeof(Date), 1, file);
  fwrite(&particpantCount, sizeof(int), 1, file);
  fwrite(participants, sizeof(Participant), particpantCount, file);

  fclose(file);

  return 0;
}