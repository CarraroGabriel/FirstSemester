// Exerc�cio 9
// Fa�a um procedimento que receba um n�mero inteiro e imprima o m�s correspondente ao n�mero.
// Por exemplo, 2 corresponde � fevereiro. O procedimento  deve  mostrar uma mensagem de erro caso o n�mero recebido n�o fa�a sentido.
// Gere tamb�m um programa que leia um valor e chame o procedimento criado.


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
    printf("M�s inv�lido.");
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
