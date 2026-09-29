#include <stdio.h>

int main() {

    int a = 2;

    //Good practice
    if (a > 3) {
        printf ("A is greater than 3 - v1 \n");
        printf ("Something else! - v1\n");
    }

    //Bad practice
    if (a > 3)
        printf ("A is greater than 3  - v2\n");
        printf ("Something else! - v2 \n");

    //It is acceptable
    if (a > 3) printf ("A is greater than 3  - v2\n");

    printf ("Goodbye \n");

    int b = 3;
    //if b > 5 = > Greater than 5
    //if not => b is not greater than 5
    if (b > 5) {
        printf("Greater than 5\n");
    } else {
        printf("b is not greater than 5\n");
    }

    printf("--------------\n");

    //if b > 5 => b is greater than 5
    //if b > 4 => b is greater than 4
    //if b > 3 => b is greater than 3
    //nothing of this true => something else
    if (b > 5) {
        printf("b is not greater than 5\n");
    } else {
        if (b > 4) {
            printf("b is greater than 4\n");
        } else {
            if (b > 3) {
                printf("b is greater than 3\n");
            } else {
                printf("Something else\n");
            }
        }
    }

    if (b > 5) {
        printf("b is not greater than 5\n");
    } else if (b > 4) {
        printf("b is greater than 4\n");
    } else if (b > 3) {
        printf("b is greater than 3\n");
    } else {
        printf("Something else\n");
    }

    int dayOfTheWeek = 1;
    /**
     * dayOfTheWeek == 1 => Monday
     * dayOfTheWeek == 2 => Tuesday
     * dayOfTheWeek == 3 => Wednesday
     * dayOfTheWeek == Something else => Some other day
     */

    if (dayOfTheWeek == 1) {
        printf("Monday\n");
    } else if (dayOfTheWeek == 2) {
        printf("Tuesday\n");
    } else if (dayOfTheWeek == 3) {
        printf("Wednesday\n");
    } else {
        printf("Some other day\n");
    }

    printf("----------\n");
    switch(dayOfTheWeek) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Some other day\n");
            break;
    }

    return 0;
}