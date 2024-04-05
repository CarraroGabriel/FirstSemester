// Exercício 9
// Leia um vetor A de 10 elementos e um valor "x". Conte e escreva quantas vezes o valor "x" ocorre no vetor A. 

#include <stdio.h>
#include <stdlib.h>
#define tam 10

int main() {
  int A[tam] = {0}, x = 0, count = 0;

  printf("\nDigite o valor de x: ");
  scanf("%d", &x);

  for (int i = 0; i < tam; i++) {
    scanf("%d", &A[i]);

    if (A[i] == x)
      count++;
  }

  printf("\nO valor %d ocorre %d vezes no vetor A", x, count);

  return 0;
}
