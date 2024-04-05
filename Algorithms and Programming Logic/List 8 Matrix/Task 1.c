// Exercício 1
// Faça um programa que leia uma matriz 4x4 e calcule a soma dos elementos da matriz. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int m[4][4];
	int i,j,soma=0;

	
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			printf("Digite os valores da matriz[%i][%i] \n",i+1,j+1);
			scanf("%i",&m[i][j]);
			soma += m[i][j];
		}}
		
	printf("Soma= %i\n",soma);
	
	system("pause");
	return 0;
}
