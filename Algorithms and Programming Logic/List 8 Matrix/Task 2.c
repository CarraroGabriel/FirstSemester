// Exercício 2
// Escreva um algoritmo que leia um número inteiro A e uma matriz M(5,5) de números. Conte quantos valores iguais a A estão na matriz.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int m[5][5];
	int A,i,j;
	int cont=0;
	
	printf("Digite o valor de A:\n");
	scanf("%i",&A);
	

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite os valores da matriz[%i][%i] \n",i+1,j+1);
			scanf("%i\n",&m[i][j]);
		}}
	
	for(i=0;i<5;i++)
		for(j=0;j<5;j++){
			if(m[i][j]== A){
				cont++;
	}}

	printf("Existem %i valores iguais a A\n",cont);

system("pause");
return 0;
}

