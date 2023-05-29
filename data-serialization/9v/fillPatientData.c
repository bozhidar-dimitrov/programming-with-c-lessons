#include "patientLinkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include "fileUtil.h"

int main(int argc, char * argv[]) {

    Patient patients[] = {
        {.name = "Ivan Petrov Dimitrov", .EGN=1122334455, .age=45, .symptoms="I have a headache"},
        {.name = "Dimitar Ivanov Dimitrov", .EGN=4422334455, .age=34, .symptoms="I have a stomacheache and bad taste in my mouth"},
        {.name = "Lidia Hristova Stefanova", .EGN=6644332211, .age=56, .symptoms="I have a pain in my legs"}        
    };

    char * fileName = argv[1];
    FILE * outputFile = fopen(fileName, "w");
    ASSERT_FILE_OPEN(outputFile);

    for (int i = 0; i < 3; i++) {
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