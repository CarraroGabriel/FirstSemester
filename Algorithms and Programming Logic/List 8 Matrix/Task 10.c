// Exerc�cio 10
// Escrever um algoritmo que leia um n�mero inteiro e uma matriz de 3X3 contendo n�meros inteiros. 
// Conte quantos elementos s�o iguais ao n�mero lido na matriz. Escreva o total de n�meros iguais.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int m[3][3];
	int num,i,j;
	int cont=0;
	
	printf("Digite um n�mero inteiro:\n");
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
