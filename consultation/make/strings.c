#include "strings.h"

int strlength(char * str) {
  int length = 0;
  while (str[length] != '\0') {
    length++;
  }

  return length;
}