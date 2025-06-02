#include <stdio.h>

#include "Participant.h"
#include "Date.h"
#include "fileUtil.h"

#define PARTICIPANTS_COUNT 3

int main(void) {

  Date date = {
    .day = 2,
    .month = 6,
    .year = 2025
  };

  Participant participants[PARTICIPANTS_COUNT] = {
    {.number = 1, .name = "Ivan", .timeInMinutes=62},
    {.number = 3, .name = "Anastasia", .timeInMinutes=83},
    {.number = 7, .name = "Martin", .timeInMinutes=52}
  };

  int participantCount = PARTICIPANTS_COUNT;

  FILE * file = fopen("maraton.bin", "wb");
  CHECK_FILE_OPEN(file);

  fwrite(&date, sizeof(Date), 1, file);
  fwrite(&participantCount, sizeof(int), 1, file);
  fwrite(participants, sizeof(Participant), participantCount, file);

  fclose(file);

  return 0;
}