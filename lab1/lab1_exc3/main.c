// Ex 3
// The Nim game
// Son tasi alan kaybeder

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SMART 1

int main(void) {

    srand(time(NULL));
    int first, smart;

    printf("Welcome to the Nim Game! \nwho starts:\npress 0: for computer first\npress 1: for you first\n");
    scanf("%d", &first);
    printf("what is the smart level:\npress 0: for non smart mode\npress 1: for smart mode\n");
    scanf("%d", &smart);

    if (first == 1)
        printf("You will play first\n");
    else
        printf("Computer will play first\n");
    int marble = 50;
    int comp_takes=0;
    int i_take;

    printf("The initial pile has %d marbles\n", marble);
if (smart == 0) {
    if (first == 1) {
        while (marble > 1) {
            printf("Your turn! How many marbles will you take (1−%d)? ", marble/2);
            scanf("%d",&i_take);
            if (i_take < marble/2 + 1) {
                marble -= i_take;

                printf("Marbles left: %d\n", marble);
                comp_takes = (rand() % (marble/2)) + 1;

                if (marble == 1){
                    printf("you won");
                }
                else if (marble == 2) {
                    printf("Computer took %d marbles out of %d\n ",comp_takes ,marble/2);
                    marble -= 1;
                    printf("Oops! You took the last marble . You lose. Better luck next time !");
                }
                else{
                    printf("Computer took %d marbles out of %d\n ",comp_takes ,marble/2);
                    marble -= comp_takes;
                    printf("Marbles left: %d\n", marble);
                }
            }
            else {
                printf("Please enter a number between the conditions\n");
            }
        }
    }
    else if (first == 0) {
        while (marble > 1) {

            comp_takes = (rand() % (marble/2)) + 1;
            printf("Computer took %d marbles out of %d\n ",comp_takes ,marble/2);
            marble -= comp_takes;
            printf("Marbles left: %d\n", marble);

            printf("Your turn! How many marbles will you take (1−%d)? ", marble/2);
            scanf("%d",&i_take);
            marble -= i_take;

            if (marble == 1){
                printf("you won");
            }
            else if (marble == 2) {
                printf("Computer took %d marbles out of %d\n ",comp_takes ,marble/2);
                marble -= 1;
                printf("Oops! You took the last marble . You lose. Better luck next time !");
            }
            else if (marble-comp_takes > 2){
                printf("Computer took %d marble from %d\n", comp_takes, marble/2);
                marble -= comp_takes;
                printf("Marbles left: %d\n", marble);
            }
        }
    }
}
else if (smart == 1) {
    if (first == 1) {
        while (marble > 1) {
            printf("Your turn! How many marbles will you take (1−%d)? ", marble/2);
            scanf("%d",&i_take);
            if (i_take < marble/2 + 1) {
                marble -= i_take;
                printf("Marbles left: %d\n", marble);

                comp_takes = 0;
                // For the best move
                for (int k = 1; (int)pow(2, k) - 1 <= marble; k++) {
                    int target = (int)pow(2, k) - 1;
                    int take = marble - target;
                    if (take >= 1 && take <= marble / 2) {
                        comp_takes = take;
                    }
                }
                // If there is a best move choose random one
                if (comp_takes == 0) {
                    comp_takes = (rand() % (marble / 2)) + 1;
                }

                if (marble == 1){
                    printf("you won");
                }
                else if (marble == 2) {
                    printf("Computer took %d marbles out of %d\n ",comp_takes ,marble/2);
                    marble -= 1;
                    printf("Oops! You took the last marble . You lose. Better luck next time !");
                }
                else{
                    printf("Computer took %d marble from %d\n", comp_takes, marble/2);
                    marble -= comp_takes;
                    printf("Marbles left: %d\n", marble);
                }
            }
            else {
                printf("Please enter a number between the conditions\n");
            }
        }
    }
    else if (first == 0) {
        while (marble > 1) {

            comp_takes = 0;
                // For the best move
            for (int k = 1; (int)pow(2, k) - 1 <= marble; k++) {
                int target = (int)pow(2, k) - 1;
                int take = marble - target;
                if (take >= 1 && take <= marble / 2) {
                    comp_takes = take;
                }
            }
            // If there is a best move choose random one
            if (comp_takes == 0) {
                comp_takes = (rand() % (marble / 2)) + 1;
            }
            marble -= comp_takes;
            printf("Marbles left: %d\n", marble);


            printf("Your turn! How many marbles will you take (1−%d)? ", marble/2);
            scanf("%d",&i_take);
            marble -= i_take;

            if (marble == 1){
                printf("you won");
            }
            else if (marble == 2) {
                printf("Computer took %d marbles out of %d\n ",comp_takes ,marble/2);
                marble -= 1;
                printf("Oops! You took the last marble . You lose. Better luck next time !");
            }
            else if (marble-comp_takes > 2){
                printf("Computer took %d marble from %d\n", comp_takes, marble/2);
                marble -= comp_takes;
                printf("Marbles left: %d\n", marble);
            }
        }
    }
}
    return 0;
}


