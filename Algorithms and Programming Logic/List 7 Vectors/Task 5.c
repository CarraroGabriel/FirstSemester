// Exerc�cio 5
// Fa�a um programa que l� 10 n�meros, calcula a m�dia e ao final mostra quantos valores s�o maiores que a m�dia e os n�meros.

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
  printf("\nM�dia dos valores = %i\n\n", avg);

  for (int i = 0; i < tam; i++) {
    if (A[i] > media) {
      printf("%i valores maiores que a m�dia", A[i]);
      count++;
    }

    if (i == (tam - 1))
      printf("| (%i)", count);
  }

  return 0;
}
