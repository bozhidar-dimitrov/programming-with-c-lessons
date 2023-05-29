#ifndef FILE_UTIL_H
#define FILE_UTIL_H

#include <stdio.h>
#include <stdlib.h>

#define ASSERT_FILE_OPEN(FPTR) \
    if ((FPTR) == NULL) { \
        printf("Cannot open file\n"); \
        exit(0); \
    }

#endif