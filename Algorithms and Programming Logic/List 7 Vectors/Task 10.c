// Exercício 10
// Faça um programa que lê 7 valores e armazena no vetor X. Ao final, mostre quantos valores pares, quantos valores ímpares e quantos negativos foram digitados. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 7

int main() {
  setlocale(LC_ALL,"");
  int X[tam] = {0}, par = 0, impar = 0, negativo = 0;

  for (int i = 0; i < tam; i++) {
    scanf("%d", &X[i]);

    if (X[i] % 2 == 0 && X[i] != 0)
      par++;

    if (X[i] % 2 != 0)
      impar++;

    if (X[i] < 0)
      negativo++;
  }

  printf("\nValores Pares: %i\nValores Ímpares: %i\nValores Negativos: %i", par, impar, negativo);

  return 0;
}
