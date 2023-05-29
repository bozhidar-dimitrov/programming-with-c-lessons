#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "fileUtil.h"
#include "patientLinkedList.h"

#define PATIENTS_COUNT 3
#define LINE_MAX_LENGTH 6000

void printPatientNode(int index, Patient patient) {
    printPatient(&patient);
}

int main(int argc, char * argv[]) {
    char * fileName = argv[1];

    LinkedList patients = init();

    FILE * inputFile = fopen(fileName, "r");
    ASSERT_FILE_OPEN(inputFile);

    char line[LINE_MAX_LENGTH];
    while (fgets(line, LINE_MAX_LENGTH, inputFile) != NULL) {
        char * newline = strchr(line, '\n');
        if (newline != NULL) {
            *newline = '\0';
        }

        Patient patient;
        char * name = strtok(line, ",");
        strcpy(patient.name, name);

        char * EGN = strtok(NULL, ",");
        patient.EGN = atol(EGN);

        char * age = strtok(NULL, ",");
        patient.age = atoi(age);

        char * symptoms = strtok(NULL, ",");
        strcpy(patient.symptoms, symptoms);

        pushback(&patients, patient);
    }

    foreach(&patients, printPatientNode);

    fclose(inputFile);
    return 0;
}