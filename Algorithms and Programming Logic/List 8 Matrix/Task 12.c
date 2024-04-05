// Exercício 12
// Faça um programa que leia uma matriz 5X5 e armazene os elementos da diagonal secundária num Vetor. Mostre a matriz e o vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 5

int main() {
	setlocale(LC_ALL,"");
	
	int i,j;
    int m[tam][tam];
    int v[tam];
    
    for (i=0;i<tam;i++) {
        for (j=0;j<tam;j++) {
        	printf("Digite os elementos da matriz[%i][%i]:\n",i+1,j+1);
            scanf("%i",&m[i][j]);
        }
    }
    
    for (i=0;i<tam;i++) {
        v[i] = m[i][4-i];
    }
    
    printf("\nMatriz 5x5:\n");
    for (i=0;i<tam;i++) {
        for (j=0;j<tam;j++) {
            printf("%i\t",m[i][j]);
        }
        printf("\n");
    }
    
    printf("\nVetor diagonal secundária:\n");
    for (i=0;i<tam;i++) {
        printf("%i \n",v[i]);
    }
    
    system("pause");
    return 0;
}
