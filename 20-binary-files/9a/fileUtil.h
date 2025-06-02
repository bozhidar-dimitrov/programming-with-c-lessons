#ifndef FILE_UTIL_H
#define FILE_UTIL_H

#include <stdlib.h>

#define CHECK_FILE_OPEN(OPENED_FILE) \
  if (file == NULL) { \
    printf("Error opening file\n"); \
    exit(1); \
  }

#endif