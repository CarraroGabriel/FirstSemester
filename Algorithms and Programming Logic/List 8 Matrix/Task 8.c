// Exercício 8
// Escrever um algoritmo que leia uma matriz M(5,5) e crie dois vetores, SL(5) e SC(5), que contenham, respectivamente as somas das linhas e das colunas de M. Escrever a matriz e os vetores criados.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int m[5][5];
	int SL[5]={0},SC[5]={0};
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite os valores da matriz[%i][%i] \n",i+1,j+1);
			scanf("%i\n",&m[i][j]);
	}}	
	
	printf("\nMatriz [5][5]:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%i\t",m[i][j]);
		}
	printf("\n");	
	}

	  for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            SL[i] += m[i][j]; 
            SC[j] += m[i][j]; 
        }
    }
    
    printf("\nSomas das linhas:\n");
    for (i=0;i<5;i++) {
        printf("Soma da linha %i: %i\n", i, SL[i]);
    }
    
    printf("\nVetor SL (Soma das Linhas):\n");
    for (i=0;i<5;i++) {
        printf("%i\n", SL[i]);
	}
	
    printf("\nSomas das colunas:\n");
    for (j=0;j<5;j++) {
        printf("Soma da coluna %i: %i\n", j, SC[j]);
    }
	
	printf("\nVetor SC (Soma das Colunas):\n");
    for (j=0;j<5;j++) {
        printf("%i\n", SC[j]);
    }
	
	system("pause");
	return 0;
}
