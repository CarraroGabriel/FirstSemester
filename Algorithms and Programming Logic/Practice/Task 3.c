// Exercício 3
// Faça um algoritmo que leia o ano de nascimento de uma pessoa. Escreva todos os anos na tela em ordem decrescente a partir do ano atual (2018). 
// Conte a quantidade de anos que se passaram e ao final imprima o total de anos (que será a idade desta pessoa).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int nascimento;
	
	printf("Digite o seu ano de nascimento: ");
	scanf("%i",&nascimento);
	
	printf("Anos desde 2023 até o ano de nascimento:\n");
	for (int i=2023;i>=nascimento;i--){
		printf("%i\n",i);
	}
	
	printf("Sua idade é: %i\n",2023-nascimento);
	
	system("pause");
	return 0;
}
