#include <stdio.h>
#include <string.h>

struct student {
    int number;
    char name[40];
    float averageGrade;
};

int main(void) {

    struct student georgi;
    georgi.number = 11;
    strcpy(georgi.name, "Georgi");
    georgi.averageGrade = 5.69;

    printf("Number:%d\n", georgi.number);
    printf("Name:%s\n", georgi.name);
    printf("Average grade:%f\n", georgi.averageGrade);

    return 0;
}