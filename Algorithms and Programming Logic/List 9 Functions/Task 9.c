// Exercício 9
// Faça um procedimento que receba um número inteiro e imprima o mês correspondente ao número.
// Por exemplo, 2 corresponde à fevereiro. O procedimento  deve  mostrar uma mensagem de erro caso o número recebido não faça sentido.
// Gere também um programa que leia um valor e chame o procedimento criado.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimeMes(int mes) {
  setlocale(LC_ALL,"");
  char *meses[] = {
      [1] = "Janeiro",
      [2] = "Fevereiro",
      [3] = "Marco",
      [4] = "Abril",
      [5] = "Maio",
      [6] = "Junho",
      [7] = "Julho",
      [8] = "Agosto",
      [9] = "Setembro",
      [10] = "Outubro",
      [11] = "Novembro",
      [12] = "Dezembro",
  };

  if (mes < 1 || mes > 12) {
    printf("Mês inválido.");
    return;
  }

  printf("%s", meses[mes]);
}

int main() {
  int valor;

  scanf("%i", &valor);
  imprimeMes(valor);

  return 0;
}
