#ifndef DATE_H
#define DATE_H

#include "types.h"

typedef struct {
  uint day;
  uint month;
  uint year;
} Date;

void printDate(Date * date);

#endif