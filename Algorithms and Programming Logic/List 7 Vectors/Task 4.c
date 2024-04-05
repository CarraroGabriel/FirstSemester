// Exercício 4
// Faça um programa que lê 10 valores e os armazena no vetor A. Após, mostre a soma dos valores. 

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
