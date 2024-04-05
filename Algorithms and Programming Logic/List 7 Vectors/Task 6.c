// Exercício 6
// Faça um programa que preenche um vetor A de 10 elementos com o valor 30. Após o preenchimento mostre o vetor A. 

#include <stdio.h>
#include <stdlib.h>
#define tam 10

int main() {
  int A[tam];

  for (int i = 0; i < tam; i++)
    A[i] = 30;

  for (int i = 0; i < tam; i++)
    printf("%i ", A[i]);

  return 0;
}
