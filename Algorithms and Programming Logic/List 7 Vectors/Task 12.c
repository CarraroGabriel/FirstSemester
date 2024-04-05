// Exercício 12
// Faça um programa que calcula o produto de dois vetores inteiros de cinco posições. 

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
    z[i] += x[i] * y[i];
    printf("%d ", z[i]);
  }

  return 0;
}
