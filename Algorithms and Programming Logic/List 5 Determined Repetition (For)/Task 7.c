// Exercício 7
// Faça um programa que mostra os números entre 200 e 100 em 5 em 5.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
  for (int i = 200; i >= 100; i -= 5)
    printf("%d\n", i);

  return 0;
}
