// Exerc�cio 9
// Fa�a um programa que calcula a tabuada de num n�mero lido.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void tabuada(int num, int limite) {
  if(num <= 0) return;

  for(int i = 1; i <= limite; i++)
    printf("%d x %d = %d\n", i, num, i * num);
}

int main() {
  setlocale(LC_ALL,"");
  int num;

  scanf("%d", &num);
  tabuada(num, 10);

  return 0;
}
