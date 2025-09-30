// Ex 1
// Luhn algorithm
// The Luhn algorithm is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers and Canadian Social Insurance Numbers

#include <stdio.h>
#include <stdlib.h>

int main(void) {


    int card_number[16];
    for (int i = 0; i < 16; i++) {
        scanf("%1d", &card_number[i]);
    }

    int sum = 0;
    for (int i = 0; i < 16; i++) {
        if (i%2==0) {
            card_number[i] = card_number[i]*2;
        }
        if (card_number[i]>9) {
            card_number[i] = card_number[i]-9;
        }
        sum += card_number[i];
        printf("%d+", card_number[i]);
    }

    if (sum %10 == 0) {
        printf("\nThe sum of the cards is: %d and it is valid\n", sum);
    }
    else {
        printf("\nThe sum of the cards is: %d and it is not valid\n", sum);
    }
    return 0;
}