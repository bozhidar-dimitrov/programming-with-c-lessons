#include "fileUtil.h"
#include <stdlib.h>

void assertFileOpen(FILE * file) {
  if (file == NULL) {
    printf("Cannot open file\n");
    exit(1);
  }
}