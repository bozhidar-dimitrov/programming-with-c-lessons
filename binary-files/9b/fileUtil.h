#ifndef FILE_UTIL_H
#define FILE_UTIL_H

#define ASSERT_FILE_OPEN(F) \
    if ((F) == NULL) { \
        printf("Error opening file\n"); \
        exit(0); \
    } \

#endif