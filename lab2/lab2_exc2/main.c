// Ex 2
// Array Manipulation Using Pointers


#include <stdio.h>

void printArray (int *arr , int size ) ;
void findMinMax ( int *arr , int size, int *min, int *max  ) ;
void reverseArray ( int *arr , int size ) ;

int main(void) {
    int arr[10] = {75, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int min = arr[0], max = arr[0];
    printArray(arr, 10);
    printf("\n");
    findMinMax(arr, 10, &min, &max);
    reverseArray(arr, 10);
    return 0;
}

void printArray (int *arr , int size ) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

void findMinMax ( int *arr , int size, int* min, int* max ) {

    for (int i = 0; i < size; i++) {
        if (*min > arr[i]) {
            *min = arr[i];
        }
        else if (*max < arr[i]) {
            *max = arr[i];
        }
    }
    printf("Minimum value is %d\n", *min);
    printf("Maximum value is %d\n", *max);
}

void reverseArray ( int *arr , int size ) {
    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[size-1-i];
    }
    printf("Reversed array is: ");
    arr = temp;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}


