#include "patientLinkedList.h"
#include "fileUtil.h"
#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 6000

int main(int argc, char * argv[]) {
    
    char * fileName = argv[1];
    FILE * outputFile = fopen(fileName, "r");
    ASSERT_FILE_OPEN(outputFile);

    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, outputFile) != NULL) {
        char * token = strtok(line, ",");
        while (token != NULL) {
            printf("%s\n", token);
            token = strtok(NULL, ",");
            //Create patient from the tokens
            //Add to the linked list
        }
    }

    fclose(outputFile);

    return 0;
}