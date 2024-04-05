// Exerc�cio 5
//  Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo, conforme a tabela abaixo a ser exibida no programa. 
// Fa�a um programa que leia o sal�rio e o cargo de um funcion�rio e calcule o novo sal�rio. 
// Se o cargo do funcion�rio n�o estiver na tabela, ele dever� ent�o receber 40% de aumento. 
// Mostre o sal�rio antigo, o novo sal�rio e a diferen�a (utilize uma mensagem adequada).
//   Cargo                         Percentual
// 1-Gerente                          10%
// 2-Engenheiro                       20%
// 3-T�cnico                          30%


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

  printf("\nDigite seu sal�rio (R$): ");
  scanf("%f", &salario);

  switch (position) {
  case 1:
    printf("\nSal�rio antigo: R$ %.2f", salario);
    printf("\nNovo sal�rio: R$ %.2f", salario + (salario * 0.1));
    printf("\nDiferen�a: R$ %.2f", (salario + (salario * 0.1)) - salario);
    break;

  case 2:
    printf("\nSal�rio antigo: R$ %.2f", salario);
    printf("\nNovo sal�rio: R$ %.2f", salario + (salario * 0.2));
    printf("\nDiferen�a: R$ %.2f", (salario + (salario * 0.2)) - salario);

  case 3:
    printf("\nSal�rio antigo: R$ %.2f", salario);
    printf("\nNovo sal�rio: R$ %.2f", salario + (salario * 0.3));
    printf("\nDiferen�a: R$ %.2f", (salario + (salario * 0.3)) - salario);
  
  default:
    printf("\nSal�rio antigo: R$ %.2f", salario);
    printf("\nNovo sal�rio: R$ %.2f", salario + (salario * 0.4));
    printf("\nDiferen�a: R$ %.2f", (salario + (salario * 0.4)) - salario);
    break;
  }

  return 0;
}
