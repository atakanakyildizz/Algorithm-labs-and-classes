// Ex 3
// Pascal’s triangle

#include <stdio.h>

int main(void) {

    int row_number;
    printf("Enter the number of rows for Pascal’s Triangle :");
    scanf("%d", &row_number);

    int arr[row_number][row_number];

    for (int i = 0; i < row_number; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    for (int i = 0; i < row_number; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
