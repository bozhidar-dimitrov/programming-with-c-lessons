#include <stdio.h>
#include <stdlib.h>

int main() {
    //"r" - open file for read
    //"w" - open file for write
    //"a" - open file for appending
    //"r+" - open file for reading and writing
    //"w+" - open file for writing and reading
    //"a+" - open file for appending and reading
    FILE * file = fopen("subjects.txt", "r");
    if (file == NULL) {
        printf("Cannot open file\n");
        exit(0);
    }

    char subject[100];
    while (fgets(subject, 100, file) != NULL) {
        printf("Subject: %s", subject);
    }

    fclose(file);

    return 0;
}