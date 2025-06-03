#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"

#define PATIENT_COUNT 3

int main(void) {

  Patient patients[PATIENT_COUNT] = {
    {.name = "Ivan Ivanov", .EGN = 12313133, .age = 32, .symptoms = "I have a headache"},
    {.name = "Nikol Georgieva", .EGN = 42342341, .age = 42, .symptoms = "I have a stomache"},
    {.name = "Goergi Vasilev", .EGN = 15345234, .age = 56, .symptoms = "I have a backpain"}
  };

  FILE * file = fopen("patients.csv", "w");
  assertFileOpen(file);

  for (int i = 0; i < PATIENT_COUNT; i++) {
    Patient patient = patients[i];
    fprintf(
      file, 
      "%s,%ld,%d,%s\n",
      patient.name,
      patient.EGN,
      patient.age,
      patient.symptoms
    );
  }

  fclose(file);

  return 0;
}