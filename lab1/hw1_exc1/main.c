// Homework
// Hamming distance in DNA

#include <ctype.h>
# include <stdio.h>
# include <string.h>

int main() {
  char dna_strand1[100];
  char dna_strand2[100];
  char output[100];
  int hamming_distance=0;

  printf("Hamming Distance Calculator for DNA Strands\n-−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−\n");

  while(1) {
    printf("Please enter the first DNA strand: ");
    scanf("%99s", dna_strand1);

    printf("Please enter the second DNA strand: ");
    scanf("%99s", dna_strand2);

    printf("Calculating Hamming Distance ...\n");

    if (strlen(dna_strand1) == strlen(dna_strand2)) {
      for (int i = 0; dna_strand1[i] != '\0'; i++) {
        dna_strand1[i] = toupper(dna_strand1[i]);
      }
      for (int i = 0; dna_strand2[i] != '\0'; i++) {
        dna_strand2[i] = toupper(dna_strand2[i]);
      }

      for (int i = 0; dna_strand1[i] != '\0'; i++) {
        if (dna_strand1[i] != 'C' && dna_strand1[i] != 'A' && dna_strand1[i] != 'G' && dna_strand1[i] != 'T') {
          printf("Error: DNA strands consist of the letters C, A, G, and T\n");
        }
      }
      for (int i = 0; dna_strand2[i] != '\0'; i++) {
        if (dna_strand1[i] != 'C' && dna_strand1[i] != 'A' && dna_strand1[i] != 'G' && dna_strand1[i] != 'T') {
          printf("Error: DNA strands consist of the letters C, A, G, and T\n");
        }
      }
      for (int i = 0; i<strlen(dna_strand1); i++) {
        if (dna_strand1[i] == dna_strand2[i]) {
          output[i] = ' ';
        }
        else {
          output[i] = '^';
          hamming_distance++;
        }
      }
      printf("Differences: %s\n", output);
      printf("Result : The Hamming Distance between the two DNAs is %d\n", hamming_distance);
      return 0;
    } else {
      printf("Error: DNA strands must be same lenght\n");
    }
  }

}

