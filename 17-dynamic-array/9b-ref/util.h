#ifndef UTIL_H
#define UTIL_H

#define ASSERT_ALLOC(PTR) \
  if (PTR == NULL) { \
    printf("Error allocating memory \n");\
    exit(1); \
  }

#endif