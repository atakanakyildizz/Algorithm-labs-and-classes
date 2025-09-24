// Ex 1
// Prime Number
// Receives an integer number n from the user and evaluates if it a prime number,

// Algortihm : For all numbers 1, 2 and n-1, check the number can divide them correctly
#include <stdio.h>

int main(void) {
    int number, counter=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 1) {
        printf("The number must be greater than 0\n");
    }
    else {
        for (int i = 2; i <= number-1; i++) {
            if (number % i == 0) {
                counter++;
            }
            i++;
        }
    }
    if (counter == 0) {
        printf("The number %d is a prime number\n", number);
    }
    else {
        printf("The number %d is not a prime number\n", number);
    }
    return 0;
}