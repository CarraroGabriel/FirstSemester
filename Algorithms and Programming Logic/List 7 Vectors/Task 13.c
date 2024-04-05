// Exercício 13
// Faça um programa que lê 10 valores de um vetor e apresenta a média aritmética desses valores.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 10

int main() {
  setlocale(LC_ALL,"");
  int x[tam] = {0}, soma = 0;

  for (int i = 0; i < tam; i++) {
    scanf("%d", &x[i]);
    soma += x[i];
  }

  printf("\nMédia Aritmética = %d\n", soma / tam);
  return 0;
}
