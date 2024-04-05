// Exercício 2
// Faça um programa que escreva 10 vezes na tela o seu nome.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define nome "Gabriel"

int main() {
  for (int i = 0; i < 10; i++)
    printf("%s\n", nome);

  return 0;
}
