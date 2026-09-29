#include <stdio.h>

int main() {

    int arr[3];

    arr[0] = 7;
    arr[1] = 5;
    arr[2] = 8;

    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }

    int arr1[3] = {1, 2, 3};
    //arr1[3] = {7, 2, 1}; - not allowed

    int arr2[] = {8, 9, 10, 9};

    return 0;
}