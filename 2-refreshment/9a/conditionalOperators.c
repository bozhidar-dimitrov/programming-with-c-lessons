#include <stdio.h>

int main() {

    int a = 2;

    //This is a bad practice
    if (a > 3) 
        printf("A is grater than 3 - v1");
        printf("We are inside the conditional operator - v1\n");

    //Good practice - even there is only one line inside the conditional operator
    if (a > 3) {
        printf("A is grater than 3 - v2");
        printf("We are inside the conditional operator - v2\n");
    }

    //You can see this also in real code - it is acceptable
    if (a > 5) printf("A is greater");

    if (a > 5) {
        printf("A is greater than 5 \n");
    } else {
        printf("A is not greater than 5 \n");
    }

    //If a > 5 => A1
    //if a > 3 => A2
    //if a > 0 => A3
    //a is something else => A4
    if (a > 5) {
        printf("A1\n");
    } else {
        if (a > 3) {
            printf("A2\n");
        } else {
            if (a > 0 ) {
                printf("A3\n");
            } else {
                printf ("A4\n");
            }
        }
    }

    if (a > 5) {
        printf("A1\n");
    } else if (a > 3) {
        printf("A2\n");
    } else if (a > 0 ) {
        printf("A3\n");
    } else {
        printf ("A4\n");
    }

    // if a == 1 = > "ONE"
    // if a == 2 = > "TWO"
    // if a == 3 = > "THREE"
    // something else = > "Some other value"

    if (a == 1) {
        printf("ONE\n");
    } else if (a == 2) {
        printf("TWO\n");
    } else if (a == 3 ) {
        printf("THREE\n");
    } else {
        printf ("Something else\n");
    }

    printf("With switch: \n");

    int b = 2;
    switch (b) {
        case 1: 
            printf("ONE\n");
            break;
        case 2:
            printf("TWO\n");
            break;
        case 3:
            printf("THREE\n");
            break;
        default:
            printf("Something else\n");
            break;
    }

    return 0;
}