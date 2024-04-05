// Exercício 6
// Faça um algoritmo que leia uma matriz 5 x 5 de números e encontre o maior e o menor valor da matriz. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int m[5][5];
	int i,j;
	int maior,menor;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite os valores da matriz[%i][%i] \n",i+1,j+1);
			scanf("%i\n",&m[i][j]);
	}}	
	
	maior = m[0][0];
	menor = m[0][0];
	
	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(m[i][j] > maior){
				maior = m[i][j];
			}
			if(m[i][j] < menor){
				menor = m[i][j];
			}
		}
	}
	
	printf("O maior valor da matriz é: %i\n",maior);
	printf("O menor valor da matriz é: %i\n",menor);
	
	system("pause");
	return 0;
}
