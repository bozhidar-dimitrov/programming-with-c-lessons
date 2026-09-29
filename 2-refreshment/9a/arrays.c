#include <stdio.h>

int main() {
    
    int arr1[3];
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;

    arr1[1] = 7;

    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr1[i]);
    }

    printf("--------\n");

    int arr2[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr2[i]);
    }

    printf("--------\n");

    int arr3[] = {4, 5, 6};
    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr3[i]);
    }

    return 0;
}