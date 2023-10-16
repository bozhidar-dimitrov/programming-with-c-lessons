#include <stdio.h>
//all caps
#define SIZE 5
#define PRINT printf("%d ", arr[i])
#define PRINT_ARRAY \
    for (int i = 0; i < 5; i++) { \
        PRINT; \
    }

int main(void) {
    int x = 6;
    printf("%d\n", x);

    printf("%d\n", SIZE);

    int arr[5] = {1, 2, 3, 4, 5};
    PRINT_ARRAY
    
    return 0;
}