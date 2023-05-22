#include <stdio.h>
#include <stdlib.h>
#include "errors.h"
#include "date.h"

int main(void) {
    FILE * file;
    //w - wb
    //r - rb
    //a - ab
    //w+ - wb+
    //r+ - rb+
    //a+ - ab+
    file = fopen("temperatures.bin", "rb");
    if (file == NULL) {
        printf("Cannot open file \n");
        exit(CANNOT_OPEN_INPUT_FILE);
    }

    int numberofsamples = 0;
    fread(&numberofsamples, sizeof(int), 1, file);

    double * samples = (double *) calloc(numberofsamples, sizeof(double));
    fread(samples, sizeof(double), numberofsamples, file);

    Date startdate;
    fread(&startdate, sizeof(Date), 1, file);

    printf("Number of samples %d\n", numberofsamples);
    for (int i = 0; i < numberofsamples; i++) {
        printf("%.2lf ", samples[i]);
    }
    printf("\n");
    printf("Start date: %d.%d.%d \n", 
        startdate.day, 
        startdate.month, 
        startdate.year
    );

    fclose(file);
    free(samples);

    return 0;
}