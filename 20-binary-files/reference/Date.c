#include "Date.h"
#include <stdio.h>

void printDate(Date * date) {
  printf("%u-%u-%u\n",
    date->day,
    date->month,
    date->year
  );
}