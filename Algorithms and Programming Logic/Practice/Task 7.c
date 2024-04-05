// Exercício 7
// Em uma empresa, existiam dois funcionários: o Mario que ganhava 1500,00 por mês, e o Rodrigo que ganhava 1100,00 por mês. 
// A empresa apresentou um plano para que o Rodrigo pudesse ganhar mais que o Mario. 
// Considerando que a empresa daria um aumento de 10% ao ano para o Mario e 20% para o Rodrigo, quantos anos levaria para que Rodrigo ultrapassasse o salário do Mário ?


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float mario=1500.00,rodrigo=1100.00;
	int cont;
	
	while (rodrigo <= mario){
		mario*=1.10;
		rodrigo*=1.20;
		cont++;
	}
	
	printf("O salário de Rodrigo irá ultrapassar o de Mário em %i anos\n",cont);
	
	system("pause");
	return 0;
}
