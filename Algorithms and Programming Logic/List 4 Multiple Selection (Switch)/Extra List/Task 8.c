// Exercício 8
//  Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo na linguagem C que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não. Use alguns dos operadores lógicos OU (||) e E (&&).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");

int idade;
printf("Digite sua idade: \n");
scanf("%i",&idade);

if 
	(idade>=18 && idade<=67){
	printf("Idade válida para doação de sangue\n");
	}
else
	printf("Idade inválida para doação de sangue\n");
		

system("pause");
return 0;
}
