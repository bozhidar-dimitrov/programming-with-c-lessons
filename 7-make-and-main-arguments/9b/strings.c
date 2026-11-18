#include "strings.h"

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    
    return len;
}