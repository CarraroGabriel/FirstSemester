// Exercício 10
// Faça um programa que tem um método que recebe como parâmetro um número e mostra a tabuada deste número.

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
