// Exercício 12
// Faça um algoritmo que leia o salário de uma pessoa e imprime o desconto do INSS segundo os critérios: a) <= R$600 = isento b) > R$601 e <= R$1200 = 20% c) > R$1201 e <= R$2000 = 25% d) > R$2001 = 30%

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"");
  double salario;

  scanf("%lf", &salario);

  if(salario <= 600.00)
    return printf("Isento");

  if(salario > 601.00 && salario <= 1200.00)
    return printf("Desconto de R$ %.2lf (20%%) sobre R$ %.2lf", salario * 0.2, salario);
    
  if(salario > 1201.00 && salario <= 2000.00)
    return printf("Desconto de R$ %.2lf (20%%) sobre R$ %.2lf", salario * 0.25, salario);

  if(salario > 2001.00)
    return printf("Desconto de R$ %.2lf (20%%) sobre R$ %.2lf", salario * 0.30, salario);

  return 0;
}
