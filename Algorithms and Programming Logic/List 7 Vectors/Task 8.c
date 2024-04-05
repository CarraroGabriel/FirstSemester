// Exercício 8
// Faça um programa que preenche um vetor A de 10 elementos com os valores 10, 20, 30, ..., 100. Após o preenchimento, mostre o vetor A. 

#include <stdio.h>
#include <stdlib.h>
#define tam 10

int main() {
  int x[tam] = {0};

  for (int i = 0; i < tam; i++)
    x[i] = (i + 1) * 10;

  for (int i = 0; i < tam; i++)
    printf("%d ", x[i]);

  return 0;
}
