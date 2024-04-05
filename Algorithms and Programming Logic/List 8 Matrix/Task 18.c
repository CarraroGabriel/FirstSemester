// Exercício 18
// Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos sao da forma:
// A[i][j] = 2*i + 7*j + 2 se i < j;
// A[i][j] = 3*i^2 +1 se i = j ;
// A[i][j] = 4*i^3 + 5*j^2 + 1 se i > j.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define tam 10

int main() {
    int m[tam][tam];
	int i,j;
 
    for (i=0;i<tam;i++){
        for (j=0;j<tam;j++){
        	printf("Digite os elementos da matriz[%i][%i]:\n",i+1,j+1);
            scanf("%i",&m[i][j]);
            
            if (i < j) {
                m[i][j] = (2*i) + (7*j) + 2;
            } else if (i == j) {
                m[i][j] = (3*pow(i,2)) + 1;
            } else {
                m[i][j] = (4*pow(i,3)) + (5*pow(j,2)) + 1;
            }
        }
    }

    printf("Matriz 10x10:\n");
    for (i=0;i<tam;i++){
        for (j=0;j<tam;j++){
            printf("%5i ",m[i][j]);
        }
        printf("\n");
    }

	system("pause");
    return 0;
}
