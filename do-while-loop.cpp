/*
NAME:GIDEON  WANJOHI NGUNJU
REG NO:CT100/G/26133/25
DESCRIPTION:DO-WHILE-LOOP-PASSWORD-ENTRY
*/

#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%19s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");

    return 0;
}

