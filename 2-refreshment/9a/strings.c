#include <stdio.h>

int main() {

    char str[6] = {'K', 'a', 'l', 'i', 'n','\0'};
    for (int i = 0; i < 6; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    char name[9] = "Viktoriq";
    char name2[] = "Aleksandar";

    printf("%s", name);
    
    return 0;
}