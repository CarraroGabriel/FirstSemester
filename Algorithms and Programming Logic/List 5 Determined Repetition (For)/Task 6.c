// Exerc�cio 6
// Fa�a um programa que mostra os n�meros entre 121 e 30 de 3 em 3.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
  for (int i = 121; i >= 30; i -= 3)
    printf("%d\n", i);

  return 0;
}
