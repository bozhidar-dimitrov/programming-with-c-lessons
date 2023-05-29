#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "patient.h"
#include "fileUtil.h"
#include "patientLinkedList.h"

#define MAX_FILE_LENGTH 1024
#define MAX_LINE_LENGTH 6000
#define PATIENTS_COUNT 3

void printPatientNode(int index, Patient patient) {
    printPatient(&patient);
}

int main(int argc, char * argv[]) {

    char fileName[MAX_FILE_LENGTH];
    strcpy(fileName, argv[1]);

    FILE * inputFile = fopen(fileName, "r");
    //DRY -> don't repeat yourself
    ASSERT_FILE_OPEN(inputFile);

    LinkedList patients = init();

    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_FILE_LENGTH, inputFile) != NULL) {
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