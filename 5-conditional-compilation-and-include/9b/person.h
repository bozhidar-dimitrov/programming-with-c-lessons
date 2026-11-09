#ifndef PERSON_H_
#define PERSON_H_

//Macro definition is allowed in header files:
#define MAX_NAME_LENGTH 50

//typedef aliases and structs are allowed in header files
typedef struct {
    char firstname[MAX_NAME_LENGTH + 1];
    char middlename[MAX_NAME_LENGTH + 1];
    char lasname[MAX_NAME_LENGTH + 1];
} Person;

//Variable declaration is allowed:
int myVar;

//Variable definition is not allowed:
//int myVar = 5;

//Function declaration is allowed:
int sum(int a, int b);

//Function definition is not allowed:
// int sum(int a, int b) {
//     return a + b;
// }
#endif