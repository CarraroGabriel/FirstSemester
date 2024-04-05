// Exercício 19
// Faça um programa que permita ao usuario entrar com uma matriz de 3 x 3 números inteiros. 
// Em seguida, gere um array unidimensional pela soma dos numeros de cada coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:
// 5   -8  10
// 1    2  15
// 25  10  7

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 3

int main() {
    int m[tam][tam];
    int SC[tam] = {0};
    int i,j;

    for (i=0;i<tam;i++){
        for (j=0;j<tam;j++){
        	printf("Digite os elementos da matriz[%i][%i]:\n",i+1,j+1);
            scanf("%i",&m[i][j]);
        }
    }

    for (j=0;j<tam;j++){
        for (i=0;i<tam;i++){
            SC[j] += m[i][j];
        }
    }
    
    printf("\nMatriz 3x3:\n");
    for (i=0;i<tam;i++){
        for (j=0;j<tam;j++){
            printf("%i\t",m[i][j]);
        }
        printf("\n");
    }

    printf("\nArray da soma das colunas:\n");
    for (j=0;j<tam;j++){
        printf("%i ", SC[j]);
    }

    return 0;
}
