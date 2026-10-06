#include <stdio.h>

int main() {

    int arr[10] = {1, 1, 1, 3, 4, 5, 5, 7, 9, 11};
    int n = 10;
    int search = 8;
    int index = -1;

    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == search) {
            index = mid;
            break;
        } else if (arr[mid] > search) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (index != -1) {
        printf("The index is %d\n", index);
    } else {
        printf("The element is not in the array \n");
    }

    return 0;
}