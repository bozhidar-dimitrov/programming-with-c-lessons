#include "strings.h"

int stringlength(char str[]) {
    int i = 0;
    
    while (str[i++] != '\0');

    return i - 1;
}