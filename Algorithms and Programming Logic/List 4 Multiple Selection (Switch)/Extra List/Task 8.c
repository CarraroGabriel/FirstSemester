// Exerc�cio 8
//  Para doar sangue � necess�rio ter entre 18 e 67 anos. Fa�a um aplicativo na linguagem C que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou n�o. Use alguns dos operadores l�gicos OU (||) e E (&&).

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
	printf("Idade v�lida para doa��o de sangue\n");
	}
else
	printf("Idade inv�lida para doa��o de sangue\n");
		

system("pause");
return 0;
}
