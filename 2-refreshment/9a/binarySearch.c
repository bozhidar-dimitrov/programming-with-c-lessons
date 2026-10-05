#include <stdio.h>

int main(void) {

    int arr[7] = {1, 1, 2, 4, 6, 7,7};
    int n = 7;
    int search = 9;
    int index = -1;
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int middle = (left + right) / 2;
        if (arr[middle] == search) {
            index = middle;
            break;
        } else if (arr[middle] > search) {
            right = middle - 1;
        } else if (arr[middle] < search) {
            left = middle + 1;
        }
    } 

    if (index != -1) {
        printf("The index is %d\n", index);
    } else {
        printf("Element is not found in the array");
    }

    return 0;
}