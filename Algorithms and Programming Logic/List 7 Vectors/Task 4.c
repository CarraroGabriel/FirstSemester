// Exerc�cio 4
// Fa�a um programa que l� 10 valores e os armazena no vetor A. Ap�s, mostre a soma dos valores. 

#include <stdio.h>
#include <stdlib.h>
#define tam 10

int main() {
  int A[tam], soma = 0;

  for (int i = 0; i < tam; i++) {
    scanf("%d", &A[i]);
    sum += A[i];
  }

  printf("\nSoma dos valores = %i", soma);

  return 0;
}
