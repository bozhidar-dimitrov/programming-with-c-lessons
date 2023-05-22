#ifndef FILE_UTIL_H
#define FILE_UTIL_H

#define ASSERT_OPEN_FILE(F) \
    if ((F) == NULL) { \
        printf("Cannot open file"); \
        exit(0); \
    }

#endif