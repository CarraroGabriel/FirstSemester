// Exercício 11
// Crie um algoritmo que armazena números em dois vetores de inteiros de cinco elementos cada. Mostre o resultado da soma dos dois vetores em cada posição comum.

#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main() {
  int x[tam] = {0}, y[tam] = {0}, z[tam] = {0};

  for (int i = 0; i < tam; i++)
    scanf("%d", &x[i]);

  for (int i = 0; i < tam; i++)
    scanf("%d", &y[i]);

  for (int i = 0; i < tam; i++) {
    z[i] += x[i] + y[i];
    printf("%d ", z[i]);
  }

  return 0;
}
