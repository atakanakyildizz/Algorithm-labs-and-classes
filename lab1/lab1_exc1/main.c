// Ex 1
// Number guessing game

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int random_number = rand() % 100+1;
    int guess = 0;

    printf("Number Guessing Game\n−−−−−−−−−−−−−−−−−−−−\n");
    printf("I have chosen a secret number between 1 and 100.\n");

    printf("Your Guess: ");
    scanf("%d", &guess);

    for (int i = 1; 1; i++) {
        if (guess < random_number) {
            printf("Hint: too low!\n");
            printf("Your Guess: ");
            scanf("%d", &guess);
        }
        else if (guess > random_number) {
            printf("Hint: too high!\n");
            printf("Your Guess: ");
            scanf("%d", &guess);
        }
        else {
            printf("Congratulations! You guessed the number in %d tries.", i );
            return 0;
        }
    }
    return 0;
}