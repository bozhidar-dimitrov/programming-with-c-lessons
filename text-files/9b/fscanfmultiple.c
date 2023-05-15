#include <stdio.h>
#include <stdlib.h>

int main() {
    //"r" - open file for read
    //"w" - open file for write
    //"a" - open file for appending
    //"r+" - open file for reading and writing
    //"w+" - open file for writing and reading
    //"a+" - open file for appending and reading
    FILE * file = fopen("records.txt", "r");
    if (file == NULL) {
        printf("Cannot open file\n");
        exit(0);
    }

    char name[40];
    int number;
    double averageGrade;
    while(fscanf(file, "%s %d %lf\n", name, &number, &averageGrade) > 0) {
        printf(
            "Name: %s, number: %d, averageGrade: %lf\n", 
            name,
            number, 
            averageGrade
        );
    }

    fclose(file);

    return 0;
}