// Ex 2
// The Nim game

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int balance = 500;
    int temp;
    int choose;

    while (1) {
        printf("A&P Bank Virtual ATM\n−−−−−−−−−−−−−−−−−−−−\n");
        printf("Please choose an option :\n1. Deposit funds\n2. Withdraw funds\n3. Check balance\n4. Exit\n");
        printf("Your choice: ");
        if (scanf("%d", &choose) != 1) {
            int c;
            continue;
        }

        switch (choose) {
            case 1:
                printf("Enter the amount you wish to deposit :");
            scanf("%d", &temp);
            balance += temp;
            printf("The transaction is successful! New balance is :%d\n", balance);
            break;

            case 2:
                printf("Enter the amount you wish to withdraw :");
            scanf("%d", &temp);
            if (temp > balance) {
                printf("Insufficient funds. Current balance: %d\n", balance);
                break;
            }
            balance -= temp;
            printf("The transaction is successful! New balance is :%d\n", balance);
            break;

            case 3:
                printf("New balance is :%d\n", balance);
            break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
            break;
        }
    }
    return 0;
}
