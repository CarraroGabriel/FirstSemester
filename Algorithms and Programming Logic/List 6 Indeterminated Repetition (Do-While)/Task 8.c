// Exerc�cio 8
// Fa�a um programa que imprima na tela os n�meros de 1 a 20, um abaixo do outro.
// Depois modifique o programa para que ele mostre os n�meros um ao lado do outro (usando WHILE).

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 1;

  while (i <= 20) {
    printf("\n%i", i);
    i++;
  }

  i = 0;
  printf("\n");
  system("pause");

  while (i <= 20) {
    printf("%i ", i);
    i++;
  }

  return 0;
}
