#ifndef PERSON_H_
#define PERSON_H_

//Macro definitions are allowed in header files
#define NAME_MAX_LENGTH 40

//Struct definitions are allowed in header files
typedef struct {
    char firstname[NAME_MAX_LENGTH + 1];
    char middlename[NAME_MAX_LENGTH + 1];
    char surname[NAME_MAX_LENGTH + 1];
} Person;

//Allowed in header files
int myVar;

//Not allowed in header files:
//int mySecondVar = 5;

//This is allowed in header files
int sum(int a, int b);

//This is not allowed in header files
// int sum(int a, int b) {
//     return a + b;
// }
#endif