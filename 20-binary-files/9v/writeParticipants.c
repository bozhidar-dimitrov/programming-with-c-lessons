#include <stdio.h>
#include <stdlib.h>

#include "Participant.h"
#include "Date.h"

#define PARTICIPANT_COUNT 3

int main(void) {

  Date date = {
    .day = 27,
    .month = 5,
    .year = 2026
  };

  Participant participants[PARTICIPANT_COUNT] = {
    {
      .number = 7,
      .name = "Aleksandar Tachev",
      .timeInMinutes = 300
    },
    {
      .number = 6,
      .name = "Kaloyan Karakachanov",
      .timeInMinutes = 180
    },
    {
      .number = 41,
      .name = "Kiril Eliseev",
      .timeInMinutes = 270
    }
  };

  FILE * file = fopen("maraton.bin", "wb");
  if (file == NULL) {
    printf("Error opening a file \n");
    exit(1);
  }

  //date
  fwrite(&date, sizeof(Date), 1, file);
  int participantsCount = PARTICIPANT_COUNT;
  fwrite(&participantsCount, sizeof(participantsCount), 1, file);
  fwrite(participants, sizeof(Participant), participantsCount, file);

  fclose(file);

  return 0;
}