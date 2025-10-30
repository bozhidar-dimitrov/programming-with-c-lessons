#ifndef _PERSON_H_
#define _PERSON_H_


//Macro declaration
#define SQUARE(X) ((X)*(X))

//Struct Declaration
struct Person {
  char firstname[50];
  char secondname[50];
  char surname[50];
};

//Function declaration
int foo();

//Function definition is forbidden in header files
// int foo() {
//   printf("Something\n");
// }

//Declaring variable
int x;

//Variable definiton is forbidden in header files
//int x = 5;
#endif