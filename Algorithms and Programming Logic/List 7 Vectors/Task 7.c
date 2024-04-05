// Exercício 7
// Faça um programa que armazena 10 valores em um vetor X e mostra somente os valores armazenados nos índices pares do vetor. 

#include <stdio.h>
#include <stdlib.h>
#define tam 10

int main() {
  int x[tam];

  for (int i = 0; i < tam; i++)
    scanf("%d", &x[i]);

  for (int i = 0; i < tam; i++)
    if (i % 2 == 0)
      printf("%d ", x[i]);

  return 0;
}
