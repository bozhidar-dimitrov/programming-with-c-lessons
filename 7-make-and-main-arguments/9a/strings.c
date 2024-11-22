#include "strings.h"

int stringlength(char str[]) {
  int result = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    result++;
  }
  return result;
}