// Exerc�cio 14
// Fa�a um programa onde o usu�rio digita 10 valores que s�o armazenados em um vetor. Encontre ap�s o menor valor informado e o mostre, bem como o n�mero de vezes que esse valor apareceu no vetor.

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
