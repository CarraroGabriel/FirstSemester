// Exerc�cio 10
// Depois da libera��o do governo para as mensalidades dos planos de sa�de, as pessoas come�aram a fazer pesquisas para descobrir um bom plano, n�o muito caro. 
// Um vendedor de um plano de sa�de apresentou a tabela a seguir. Fa�a um programa que entre com a idade de uma pessoa e imprime o valor que ela dever� pagar.
// - at� 10 anos - R$30,00
// - acima de 10 anos at� 29 anos - R$60,00
// - acima de 29 anos at� 45 anos - R$120,00
// - acima de 45 anos at� 59 anos - R$150,00
// - acima de 59 anos at� 65 anos - R$250,00
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
	printf("O valor do plano ser� R$30,00\n");
	}
else{
	if
		(idade<=29){
		printf("O valor do plano ser� R$60,00\n");
		}
	
else{
	if
		(idade<=45){
		printf("O valor do plano ser� R$120,00\n");
		}

else{
	if
		(idade<=59){
		printf("O valor do plano ser� R$150,00\n");
		}
	
else{
	if
		(idade<=65){
		printf("O valor do plano ser� R$250,00\n");
		}
		
else{
	if
		(idade>65){
		printf("O valor do plano ser� R$400,00\n");	
		}

}}}}
}

system("pause");
return 0;
}
