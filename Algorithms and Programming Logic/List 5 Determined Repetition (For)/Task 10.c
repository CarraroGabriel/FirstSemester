// Exercício 10
// Faça um algoritmo que leia 10 números inteiros e identifique o maior e o menor.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
  int num, menor, maior;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &num);

    if(i == 0) {
      maior = num;
      menor = num;
    }

    if(num > maior)
      maior = num;

    if(num < menor)
      menor = num;
  }

  printf("\nMenor valor = %d", menor);
  printf("\nMaior valor = %d", maior);

  return 0;
}
