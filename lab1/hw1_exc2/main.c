// Homework
// Binary to decimal conversation

#include <ctype.h>
# include <stdio.h>
#include <stdlib.h>
# include <string.h>

int main() {
  char str[100];
  int sum=0;
  int binary;

  printf("Enter a binary string: ");
  scanf("%s", str);

  printf("%s => ", str);

  for (int i = 0; i < strlen(str); i++) {
    binary = str[i] - '0';
    sum = sum * 2 + binary;
    printf("%c.2^%d + ", str[i], i );
  }
  printf("= %dbase10", sum);

  return 0;
  }
