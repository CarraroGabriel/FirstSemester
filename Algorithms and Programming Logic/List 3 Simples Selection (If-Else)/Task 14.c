// Exercício 14
// Um posto está vendendo combustíveis com a seguinte tabela de descontos: 
// - Álcool: até 20 litros, desconto de 3% por litro - acima de 20 litros, desconto de 5% por litro 
// - Gasolina: até 20 litros, desconto de 4% por litro - acima de 20 litros, desconto de 6% por litro
// Faça um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A - álcool, G - gasolina), 
// calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 6,50 o preço do litro do álcool é R$6,00

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL,"");
  int litros;
  float gasolina = 6.5, alcool = 6.0;
  char cod;

  printf("Digite a quantidade de litros vendida: \n");
  scanf("%d", &litros);

  printf("Digite o tipo de combustivel (A - alcool, G - Gasolina): ");
  scanf("%c", &cod);

  if (cod == 'A') {

    if (litros <= 20) 
      alcool = alcool - (alcool * 0.03);
    else 
      alcool = alcool - (alcool * 0.05);    
        
    return printf("O valor a ser pago é de R$%.2f\n", alcool * litros);
  } 
  
  if (cod == 'G') {

    if (litros <= 20) 
      gasolina = gasolina - (gasolina * 0.04);
    else
      gasolina = gasolina - (gasolina * 0.06);
    
    return printf("O valor a ser pago é de R$%.2f\n", gasolina * litros);
  }

  printf("\nTipo de combustível inválido, digite novamente!\n");
  return 0;
}
