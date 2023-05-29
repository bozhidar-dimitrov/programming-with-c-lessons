#include <stdio.h>
#include <stdlib.h>
#include "patient.h"
#include "fileUtil.h"

#define PATIENTS_COUNT 3

int main(int argc, char * argv[]) {
    char * fileName = argv[1];
    
    Patient patients[PATIENTS_COUNT] = {
        {.name = "Ivan Ivanov Petrov", .EGN=2244556677, .age=56, .symptoms="I have a headache"},
        {.name = "Nikola Dimitrov Martinov", .EGN=5544332244, .age=25, .symptoms="I have a stomachache and a bad taste in my mouth"},
        {.name = "Angelina Petrova Asenova", .EGN=7755443322, .age=75, .symptoms="I have pain in my legs"}
    };
    //DRY - Don't repeat yourself
    FILE * outputFile = fopen(fileName, "w");
    ASSERT_FILE_OPEN(outputFile);

    for (int i = 0; i < PATIENTS_COUNT; i++) {
        // Patient * patient = &patients[i];
        Patient * patient = patients + i; 
        fprintf(outputFile, "%s,%ld,%d,%s\n", 
            patient->name,
            patient->EGN,
            patient->age,
            patient->symptoms
        );
    }

    fclose(outputFile);
    return 0;
}