// Exerc�cio 10
// Fa�a um programa que tem um m�todo que recebe como par�metro um n�mero e mostra a tabuada deste n�mero.

#include <stdio.h>
#include <stdlib.h>


void tabuada(int num) {
  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num * i);
  }
}

int main() {
  int n;

  scanf("%i", &n);
  tabuada(n);

  return 0;
}
