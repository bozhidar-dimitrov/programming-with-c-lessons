#include <stdio.h>

/**
 * array_size - variables and functions in python - snake case
 * arraySize - variables and functions in java and javascript - camel case
 * ArraySize - variables and functions in C# - pascal case
 */

/*
    Macro names in C - use ALL_CAPS
*/
#define ARRAY_SIZE 11
#define PRINT printf("%d ", arr[i]);

//Macro chaining
#define PRINT_ARRAY for (int i = 0; i < ARRAY_SIZE; i++) { \
    PRINT \
}

int main(void) {
    //int arraySize = 15;
    //Variable length arrays - VLA - not supported by the latest C standard
    //int arr[arraySize] = {1, 6, 3, 9 ,7, 8, 4, 2, 10, 5, 12, 11, 15, 13, 14};

    //Variable length arrays - VLA - not supported by the latest C standard
    int arr[ARRAY_SIZE] = {1, 6, 3, 9 ,7, 8, 4, 2, 10, 5, 12};
    
    //Macro expansion 
    PRINT_ARRAY
    printf("\n");

    return 0;
}