#include <stdio.h>

int main() {

    int arr[3][4]; //2d array with 3 rows and 4 columns

    int arr2[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 4; k++) {
            printf("%d ", arr2[i][k]);
        }
        printf("\n");
    }

    return 0;
}