// Exerc�cio 15
// No supermercado, as ma��s est�o custando R$0,80 se forem compradas menos do que uma d�zia e R$0,50 se forem compradas mais de uma d�zia.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"");
  float valor = 0.8, desconto = 0.3;
  int quantidade;

  printf("Informe quantas ma��s foram compradas: \n");
  scanf("%d", &quantidade);

  if (quantity < 12) {
    printf("O valor a ser pago � de R$%.2f\n", valor * quantidade);
  } else {
    printf("O valor a ser pago � de R$%.2f\n", (valor - desconto) * quantidade);
  }

  return 0;
}
