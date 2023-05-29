#include "patient.h"
#include <stdio.h>

void printPatient(Patient * patient) {
    printf("---------------------\n");
    printf("Name: %s\n", patient->name);
    printf("EGN: %ld\n", patient->EGN);
    printf("Age: %d\n", patient->age);
    printf("Symptoms: %s\n", patient->symptoms);
    printf("---------------------\n");
}