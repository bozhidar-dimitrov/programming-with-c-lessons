#include <stdio.h>
#include <stdlib.h>

int main() {
    //"r" - open file for read
    //"w" - open file for write
    //"a" - open file for appending
    //"r+" - open file for reading and writing
    //"w+" - open file for writing and reading
    //"a+" - open file for appending and reading
    FILE * file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Cannot open file\n");
        exit(0);
    }

    //fscanf
    //fgets
    //fgetc
    char name[40];
    int number;
    double averageGrade;
    fscanf(file, "%s %d %lf\n", name, &number, &averageGrade);
    printf(
        "Name: %s, number: %d, averageGrade: %lf\n", 
        name,
        number, 
        averageGrade
    );

    char line[100];
    fgets(line, 100, file);
    printf("Line: %s", line);

    char symbol = fgetc(file);
    printf("Symbol: %c\n", symbol);

    fclose(file);

    return 0;
}