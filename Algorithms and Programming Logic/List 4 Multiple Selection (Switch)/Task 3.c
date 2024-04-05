// Exercício 3
// Um Banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. 
// Faça um programa em C que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo (exiba a tabela 
// no programa). Mostre uma mensagem informando o saldo médio e o valor do crédito. 
//   Saldo médio                                   Percentual
// de 0 a 200,00                          nenhum crédito (crédito = 0)
// de 201,00 a 400,00                     20% do valor do saldo médio
// de 401,00 a 600,00                     30% do valor do saldo médio
// acima de 600,00                        40% do valor do saldo médio

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");

int saldo_medio;
float saldo;

printf("Digite seu saldo:\n");
scanf("%f",&saldo);
printf("Digite a opção a qual se encaixa o seu saldo médio no último ano:\n 1:R$0-R$200,00 2:R$201,00-R$400,00 3:R$401,00-R$600,00 4:acima de R$600,00\n");
scanf("%i",&saldo_medio);

switch (saldo_medio){
	case 1: printf("De acordo com seu saldo médio %.2f, você não terá nenhum crédito\n",saldo);break;
	case 2: printf("De acordo com seu saldo médio R$%.2f, seu limite de crédito será R$%.2f\n",saldo,saldo*0.2);break;
	case 3: printf("De acordo com seu saldo médio R$%.2f, seu limite de crédito será R$%.2f\n",saldo,saldo*0.3);break;
	case 4: printf("De acordo com seu saldo médio R$%.2f, seu limite de crédito será R$%.2f\n",saldo,saldo*0.4);break;
} 

system("pause");
return 0;
}
