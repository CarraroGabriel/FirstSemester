// Exerc�cio 13
// Fa�a um programa que l� 10 valores de um vetor e apresenta a m�dia aritm�tica desses valores.

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

  printf("\nM�dia Aritm�tica = %d\n", soma / tam);
  return 0;
}
