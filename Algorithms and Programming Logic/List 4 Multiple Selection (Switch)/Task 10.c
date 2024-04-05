// Exercício 10
// Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. 
// Um vendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com a idade de uma pessoa e imprime o valor que ela deverá pagar.
// - até 10 anos - R$30,00
// - acima de 10 anos até 29 anos - R$60,00
// - acima de 29 anos até 45 anos - R$120,00
// - acima de 45 anos até 59 anos - R$150,00
// - acima de 59 anos até 65 anos - R$250,00
// - maior que 65 anos - R$400,00

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");

int idade;
printf("Digite sua idade:");
scanf("%i",&idade);

if 
	(idade<=10){
	printf("O valor do plano será R$30,00\n");
	}
else{
	if
		(idade<=29){
		printf("O valor do plano será R$60,00\n");
		}
	
else{
	if
		(idade<=45){
		printf("O valor do plano será R$120,00\n");
		}

else{
	if
		(idade<=59){
		printf("O valor do plano será R$150,00\n");
		}
	
else{
	if
		(idade<=65){
		printf("O valor do plano será R$250,00\n");
		}
		
else{
	if
		(idade>65){
		printf("O valor do plano será R$400,00\n");	
		}

}}}}
}

system("pause");
return 0;
}
