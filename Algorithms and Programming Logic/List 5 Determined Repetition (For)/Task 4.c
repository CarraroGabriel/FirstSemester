// Exercício 4
// Faça um programa que mostra na tela osnúmeros de 50 até 5 e mostra os valores ímpares.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define tam 50

int main() {
  for (int i = tam; i >= 5; i--)
    printf("%d\n", i);

  for (int i = 0; i < tam; i++)
    if(i % 2 != 0)
      printf("%d\n", i);

  return 0;
}
