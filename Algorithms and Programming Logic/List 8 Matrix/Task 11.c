// Exercício 11
// Escrever um algoritmo que leia uma Matrix M (5,3). Descubra o menor valor desta matriz e escreva-o juntamente com o conteúdo da Matriz.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int m[5][3];
	int i,j;
	int menor;
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("Digite os valores da matriz[%i][%i] \n",i+1,j+1);
			scanf("%i\n",&m[i][j]);
	}}	
	
	menor = m[0][0];
	
	for (i=0;i<5;i++){
		for(j=0;j<3;j++){
			if(m[i][j] < menor){
				menor = m[i][j];
			}
		}
	}
	
		printf("\nMatriz[5][3]:\n");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%i\t",m[i][j]);
		}
	printf("\n");	
	}
	
	printf("O menor valor da matriz é: %i\n",menor);
	
	system("pause");
	return 0;
}
