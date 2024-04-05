// Exercício 5
// Faça um programa que lê 10 números, calcula a média e ao final mostra quantos valores são maiores que a média e os números.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 10

int main() {
  setlocale(LC_ALL,"");
  
  int A[tam], soma = 0, media = 0, count = 0;

  for (int i = 0; i < tam; i++) {
    scanf("%d", &A[i]);
    sum += A[i];
  }

  media = soma / tam;
  printf("\nMédia dos valores = %i\n\n", avg);

  for (int i = 0; i < tam; i++) {
    if (A[i] > media) {
      printf("%i valores maiores que a média", A[i]);
      count++;
    }

    if (i == (tam - 1))
      printf("| (%i)", count);
  }

  return 0;
}
