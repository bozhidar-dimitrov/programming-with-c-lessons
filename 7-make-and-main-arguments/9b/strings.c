#include "strings.h"

int stringlen(char str[]) {
  int len = 0;
  for (; str[len] != '\0'; len++);

  return len;
}