/*
name: GIDEON NGUNJU
REG: CT100/G/26133/25
description: CALCULATING_FARE
*/
#include <stdio.h>

int main() {
    float DISTANCE, FARE;
    printf("Enter your DISTANCE in KILOMETER: ");
    scanf("%f", &DISTANCE);

    FARE = DISTANCE * 50;
    printf("Your FARE  is %.2f\n", FARE);
    return 0;
}
