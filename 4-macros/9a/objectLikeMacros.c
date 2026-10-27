#include <stdio.h>
//Coding convention - конвенция за писане на код (като договор как да се изписват
// имената на променливи, функции и как въобще да се изписва кода)
//print_hello - snake case - used in python for variables and functions
//printHello - used in javascript for variables and functions
//PrintHello - Pascal case - used in C# for variables and functions

//In c macros are ALL_CAPS 
#define ARRAY_SIZE 7

#define PRINT printf("%d ", arr[i]);

//Macros chaining
#define PRINT_ARRAY for (int i = 0; i < ARRAY_SIZE; i++) { \
        PRINT \
    } 

int main(void) {
    //int n = 9;
    //VLA - variable length arrays
    //int arr[n] = {1, 3, 2, 7, 4, 5, 6, 9, 10};

    int arr[ARRAY_SIZE] = {1, 3, 2, 7, 4, 5, 6};

    //Macros expansion:
    PRINT_ARRAY
    printf("\n");

    return 0;
}