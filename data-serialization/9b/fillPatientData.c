#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "fileUtil.h"

#define MAX_FILE_LENGTH 1024
#define PATIENTS_COUNT 3

int main(int argc, char * argv[]) {

    Patient patients[PATIENTS_COUNT] = {
        {.name = "Alexandar Ivanov Petrov", .EGN = 2255331144, .age=56, .symptoms="I have a headache"},
        {.name = "Todor Ivailov Hristov", .EGN = 4455331144, .age=34, .symptoms="I have a backpain"},
        {.name = "Viktoria Vladimirova Nikolaeva", .EGN = 4455667766, .age=23, .symptoms="I have a stomachache and a bad taste in my mouth"}
    };

    char fileName[MAX_FILE_LENGTH];
    strcpy(fileName, argv[1]);

    FILE * outputFile = fopen(fileName, "w");
    ASSERT_FILE_OPEN(outputFile);

    for (int i = 0; i < PATIENTS_COUNT; i++) {
        //Patient * patient = &patients[i];
        Patient * patient = patients + i;
        fprintf(
            outputFile, 
            "%s,%ld,%d,%s\n",
            patient->name,
            patient->EGN,
            patient->age,
            patient->symptoms
        );
    }
    

    fclose(outputFile);

    return 0;
}