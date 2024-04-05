// Exercício 6
// Fazer uma funcao que calcula a enesima potencia de uma variavel real x: f(x, n) = xn 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double potencia(double x, double n) {
  return pow(x, n);
}

int main() {
  double x, n;

  scanf("%lf %lf", &x, &n);

  printf("\n%.2lf", potencia(x, n));

  return 0;
}
