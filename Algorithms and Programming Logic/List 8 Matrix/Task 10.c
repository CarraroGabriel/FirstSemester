// Exercício 10
// Escrever um algoritmo que leia um número inteiro e uma matriz de 3X3 contendo números inteiros. 
// Conte quantos elementos são iguais ao número lido na matriz. Escreva o total de números iguais.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int m[3][3];
	int num,i,j;
	int cont=0;
	
	printf("Digite um número inteiro:\n");
	scanf("%i",&num);
	

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite os valores da matriz[%i][%i] \n",i+1,j+1);
			scanf("%i\n",&m[i][j]);
		}}
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			if(m[i][j]== num){
				cont++;
	}}

	printf("Existem %i valores iguais a %i\n",cont,num);

system("pause");
return 0;
}
