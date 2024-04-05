// Exercício 10
// Faça um algoritmo que leia o destino do passageiro, se a viagem incluir retorno (ida e volta), informar o valor da passagem de acordo com a tabela a seguir:
// Destino                            IDA                    IDA e VOLTA 
// Região Norte                     R$500,00                  R$900,00 
// Região Nordeste                  R$350,00                  R$650,00 
// Região Centro-Oeste              R$350,00                  R$600,00 
// Região Sul                       R$300,00                  R$550,00

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
setlocale(LC_ALL,"");

char destino[50];

printf("Informe o seu destino desejado (Norte, Nordeste, Centro-Oeste ou Sul): \n");
scanf("%s", &destino);

if 
	(strcmp(destino,"Norte")==0){
	printf("A passagem apenas de ida para Região Norte sai no valor de R$500,00, e ida e volta por R$900,00\n");}
else if
	(strcmp(destino,"Nordeste")==0){
	printf("A passagem apenas de ida para Região Nordeste sai no valor de R$350,00, e ida e volta por R$650,00\n");
	}
else if
	(strcmp(destino,"Centro-Oeste")==0){
	printf("A passagem apenas de ida para Região Centro-Oeste sai no valor de R$350,00, e ida e volta por R$600,00\n");
	}
else if
	(strcmp(destino,"Sul")==0){
	printf("A passagem apenas de ida para Região Sul sai no valor de R$300,00, e ida e volta por R$550,00\n");
	}
	
system("pause");

return 0;
}
