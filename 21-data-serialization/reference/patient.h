#ifndef PATIENT_H
#define PATIENT_H

#define PATIENT_NAME_MAX_LENGTH 100
#define SYMPTOMS_MAX_LENGTH 255

typedef struct {
  char name[PATIENT_NAME_MAX_LENGTH];
  long EGN;
  int age;
  char symptoms[SYMPTOMS_MAX_LENGTH];
} Patient;

void printPatient(Patient * patient);

#endif