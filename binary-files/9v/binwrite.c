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
    file = fopen("temperatures.bin", "wb");
    if (file == NULL) {
        printf("Cannot open file \n");
        exit(CANNOT_OPEN_INPUT_FILE);
    }

    int numberofsamples = 5;
    double samples[5] = {35, 35, 42, 12, 43};
    Date startDate = {
        .day = 22,
        .month = 5,
        .year = 2023
    };

    fwrite(&numberofsamples, sizeof(int), 1, file);
    fwrite(samples, sizeof(double), numberofsamples, file);
    fwrite(&startDate, sizeof(Date), 1, file);

    fclose(file);

    return 0;
}