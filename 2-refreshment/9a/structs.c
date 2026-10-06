#include <stdio.h>
#include <string.h>

struct student {
    int number;
    char name[40];
    float averageGrade;
};

int main(void) {

    struct student ivaylo;
    char name[40];
    ivaylo.number = 13;
    strcpy(ivaylo.name, "Ivaylo");
    ivaylo.averageGrade = 5.25;

    printf("Number: %d\n", ivaylo.number);
    printf("Name: %s\n", ivaylo.name);
    printf("Average grade: %f\n", ivaylo.averageGrade);

    return 0;
}