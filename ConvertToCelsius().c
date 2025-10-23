/*
name: GIDEON NGUNJU
REG: CT100/G/26133/25
description: converting-Fahrenheit-to-celsius
*/
#include <stdio.h>

int main() {
    float temperature, celsius;
    printf("Enter your temperature in Fahrenheit: ");
    scanf("%f", &temperature);

    // Correct conversion formula
    celsius = (temperature - 32) * 5 / 9;

    printf("Your Celsius temperature is %.2f\n", celsius);
    return 0;
}
