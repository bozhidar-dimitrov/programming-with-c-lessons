#include <stdio.h>

int main() {

    char name[5] = {'I', 'v', 'a', 'n', '\0'};
    for (int i = 0; i < 5; i++) {
        printf("%c", name[i]);
    }

    char name2[5] = "Ivan";
    char name3[] = "Aleksandar";
    for (int i = 0; name3[i] != '\0'; i++) {
        printf("%c", name[i]);
    }

    printf("%s", name3);

    return 0;
}