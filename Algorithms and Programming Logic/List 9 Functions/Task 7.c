// Exerc�cio 7
// Fa�a uma fun��o que recebe um valor inteiro e verifica se o valor � positivo, negativo  ou  zero.
// A fun��o deve retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.

#include <stdio.h>
#include <stdlib.h>

int check_num(int num) {
  if (num > 0)
    return 1;
  else if (num < 0)
    return -1;
  else
    return 0;
}

int main() {
  int n;

  scanf("%i", &n);
	
  printf("\n1 = Valor Positivo, -1 = Valor Negativo, 0 = Zero! \n");
  printf("\n%i", check_num(n));

  return 0;
}
