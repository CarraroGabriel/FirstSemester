// Exercício 7
// Faça um algoritmo que leia uma matriz 5 x 5 de números. Calcule e mostre a soma das linhas pares da matriz. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int	m[5][5];
	int i,j;
	int soma_pares;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite os valores da matriz[%i][%i] \n",i+1,j+1);
			scanf("%i\n",&m[i][j]);
	}}
	
	for(i=0;i<5;i+=2){
		for(j=0;j<5;j++){
		soma_pares += m[i][j];	
		}
	}
	
	printf("A soma das linhas pares da matriz é: %i\n",soma_pares);
	
	system("pause");
	return 0;	
}
