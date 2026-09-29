#include <stdio.h>

int main(void) {

    int a = 7;
    
    //0+ 
    while (a < 5) {
        printf("%d ", a);
        a++;
    }

    printf("\n");

    int a1 = 7;
    //1+
    do {
        printf("%d ", a1);
        a1++;
    } while (a1 < 5);


    int a2 = 0;
    scanf("%d", &a2);
    while (a2 < 0 || a2 > 9) {
        printf("Try again!\n");
        scanf("%d", &a2);
    }

    int a3 = 0;
    do {
        printf("Please enter a value between 0 and 9:");
        scanf("%d", &a3);
    } while (a3 < 0 || a3 > 9);

    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}