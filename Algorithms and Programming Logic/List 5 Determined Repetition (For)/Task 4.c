// Exerc�cio 4
// Fa�a um programa que mostra na tela osn�meros de 50 at� 5 e mostra os valores �mpares.

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
