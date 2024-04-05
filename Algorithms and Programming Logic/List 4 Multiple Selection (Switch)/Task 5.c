// Exercício 5
//  Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo a ser exibida no programa. 
// Faça um programa que leia o salário e o cargo de um funcionário e calcule o novo salário. 
// Se o cargo do funcionário não estiver na tabela, ele deverá então receber 40% de aumento. 
// Mostre o salário antigo, o novo salário e a diferença (utilize uma mensagem adequada).
//   Cargo                         Percentual
// 1-Gerente                          10%
// 2-Engenheiro                       20%
// 3-Técnico                          30%


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"");
  int cargo;
  float salario;

  printf("Cargo             |  Percentual\n");
  printf("1 - Gerente       |  10%%\n");
  printf("2 - Engenheiro    |  20%%\n");
  printf("3 - Tecnico       |  30%%\n");
  printf("4 - Outros        |  40%%\n");

  printf("\nDigite seu cargo: ");
  scanf("%d", &cargo);

  printf("\nDigite seu salário (R$): ");
  scanf("%f", &salario);

  switch (position) {
  case 1:
    printf("\nSalário antigo: R$ %.2f", salario);
    printf("\nNovo salário: R$ %.2f", salario + (salario * 0.1));
    printf("\nDiferença: R$ %.2f", (salario + (salario * 0.1)) - salario);
    break;

  case 2:
    printf("\nSalário antigo: R$ %.2f", salario);
    printf("\nNovo salário: R$ %.2f", salario + (salario * 0.2));
    printf("\nDiferença: R$ %.2f", (salario + (salario * 0.2)) - salario);

  case 3:
    printf("\nSalário antigo: R$ %.2f", salario);
    printf("\nNovo salário: R$ %.2f", salario + (salario * 0.3));
    printf("\nDiferença: R$ %.2f", (salario + (salario * 0.3)) - salario);
  
  default:
    printf("\nSalário antigo: R$ %.2f", salario);
    printf("\nNovo salário: R$ %.2f", salario + (salario * 0.4));
    printf("\nDiferença: R$ %.2f", (salario + (salario * 0.4)) - salario);
    break;
  }

  return 0;
}
