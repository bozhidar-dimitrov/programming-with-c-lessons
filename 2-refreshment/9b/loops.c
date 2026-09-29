#include <stdio.h>

int main(void) {

    //while
    int i = 7;
    //0+
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    printf("-------------\n");

    int i1 = 7;
    //1+
    do {
        printf("%d ", i1);
        i1++;
    } while (i1 <= 5);

    printf("\n");
    printf("-------------\n");

    int x = 0;
    printf("Please enter a number between 0 and 9 \n");
    scanf("%d", &x);
    while (x < 0 || x > 9) {
        printf("Please enter a number between 0 and 9 \n");
        scanf("%d", &x);
    }
    //DRY principle - Don't repeat yourself

    int x1 = 0;
    do {
        printf("Please enter a number between 0 and 9 \n");
        scanf("%d", &x1); 
    } while (x1 < 0 || x1 > 9);

    //do while

    //for
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}