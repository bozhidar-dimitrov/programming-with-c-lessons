#include <stdio.h>
#include <stdlib.h>

#define FILE_OPENNING_ERROR 1

int main() {
    FILE * poem = fopen("poem.txt", "r");
    if (poem == NULL) {
        printf("Cannot open file");
        exit(FILE_OPENNING_ERROR);
    }

    FILE * poemCopy = fopen("poemCopy.txt", "w");
    if (poemCopy == NULL) {
        printf("Cannot open file");
        exit(FILE_OPENNING_ERROR);
    }

    char symbol;
    while ((symbol = fgetc(poem)) != EOF) {
        fputc(symbol, poemCopy);
    }

    fclose(poem);
    fclose(poemCopy);

    return 0;
}