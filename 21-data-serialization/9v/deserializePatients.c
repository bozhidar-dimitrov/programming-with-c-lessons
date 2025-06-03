#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"
#include "linkedlist.h"
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 100

void eacher(uint index, ListType nodeValue) {
  printPatient(&nodeValue);
}

int main(void) {

  LinkedList list = init();
  FILE * file = fopen("patients.csv", "r");

  char line[100];
  while(fgets(line, MAX_LINE_LENGTH, file) != NULL) {
    //First remove the newline from the line
    char * p = strchr(line, '\n');
    if (p !=NULL) {
      *p = '\0';
    }

    Patient patient;
    char * token = strtok(line, ",");
    if (token != NULL) {
      strcpy(patient.name, token);
    }

    token = strtok(NULL, ",");
    if (token != NULL) {
      patient.EGN = atol(token);
    }

    token = strtok(NULL, ",");
    if (token != NULL) {
      patient.age = atoi(token);
    }

    token = strtok(NULL, ",");
    if (token != NULL) {
      strcpy(patient.symptoms, token);
    }

    pushBack(&list, patient);
  }

  forEach(&list, eacher);

  fclose(file);
  release(&list);
  return 0;
}