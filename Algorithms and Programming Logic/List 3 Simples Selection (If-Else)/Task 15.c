// Exercício 15
// No supermercado, as maçãs estão custando R$0,80 se forem compradas menos do que uma dúzia e R$0,50 se forem compradas mais de uma dúzia.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"");
  float valor = 0.8, desconto = 0.3;
  int quantidade;

  printf("Informe quantas maçãs foram compradas: \n");
  scanf("%d", &quantidade);

  if (quantity < 12) {
    printf("O valor a ser pago é de R$%.2f\n", valor * quantidade);
  } else {
    printf("O valor a ser pago é de R$%.2f\n", (valor - desconto) * quantidade);
  }

  return 0;
}
