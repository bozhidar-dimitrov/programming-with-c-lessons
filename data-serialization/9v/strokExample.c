#include <stdio.h>
#include <string.h>

int main(void) {
    char testString[] = "Value1,Test,2345,10";
    char * token = strtok(testString, ",");
    while (token != NULL) {
        printf("Token: %s\n", token);
        printf("Original: %s\n", testString);
        token = strtok(NULL, ",");
    }

    return 0;
}