// Exercício 14
// Faça um programa onde o usuário digita 10 valores que são armazenados em um vetor. Encontre após o menor valor informado e o mostre, bem como o número de vezes que esse valor apareceu no vetor.

#include <stdio.h>
#include <stdlib.h>
#define tam 10

int main() {
  int x[tam] = {0}, menor = 0, ocorre = 0;

  for (int i = 0; i < tam; i++) {
    scanf("%d", &x[i]);

    if (i == 0)
      menor = x[i];

    if (x[i] < menor)
      menor = x[i];

    if (x[i] == menor)
      ocorre++;
  }

  printf("\nMenor valor = %d", menor);
  printf("\nO valor ocorre %d vezes\n", ocorre);
  return 0;
}
