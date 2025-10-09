/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber;
	int guess;
	int attempts = 0;

    
    srand(time(NULL));
    secretNumber = rand() % 20 + 1; 

    
    printf("My selected a number between 1 and 20. Try to guess it.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}
