// Exerc�cio 3
// Um Banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano. 
// Fa�a um programa em C que leia o saldo m�dio de um cliente e calcule o valor do cr�dito de acordo com a tabela abaixo (exiba a tabela 
// no programa). Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito. 
//   Saldo m�dio                                   Percentual
// de 0 a 200,00                          nenhum cr�dito (cr�dito = 0)
// de 201,00 a 400,00                     20% do valor do saldo m�dio
// de 401,00 a 600,00                     30% do valor do saldo m�dio
// acima de 600,00                        40% do valor do saldo m�dio

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");

int saldo_medio;
float saldo;

printf("Digite seu saldo:\n");
scanf("%f",&saldo);
printf("Digite a op��o a qual se encaixa o seu saldo m�dio no �ltimo ano:\n 1:R$0-R$200,00 2:R$201,00-R$400,00 3:R$401,00-R$600,00 4:acima de R$600,00\n");
scanf("%i",&saldo_medio);

switch (saldo_medio){
	case 1: printf("De acordo com seu saldo m�dio %.2f, voc� n�o ter� nenhum cr�dito\n",saldo);break;
	case 2: printf("De acordo com seu saldo m�dio R$%.2f, seu limite de cr�dito ser� R$%.2f\n",saldo,saldo*0.2);break;
	case 3: printf("De acordo com seu saldo m�dio R$%.2f, seu limite de cr�dito ser� R$%.2f\n",saldo,saldo*0.3);break;
	case 4: printf("De acordo com seu saldo m�dio R$%.2f, seu limite de cr�dito ser� R$%.2f\n",saldo,saldo*0.4);break;
} 

system("pause");
return 0;
}
