// Exercício 16
//  Faça um programa que leia uma matriz A (5,5) de números inteiros e cria 2 vetores MaiorL(5) e MenorC(5), que contenham, respectivamente, o maior elemento de cada uma das linhas e o menor elemento de cada uma das colunas. 
// Escrever a matriz A e os vetores MaiorL e MenorC.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 5

int main(){
	setlocale(LC_ALL,"");
	
	int A[tam][tam];
	int MaiorL[tam],MenorC[tam];
	int i,j;
	
	for (i=0;i<tam;i++){
       	for (j=0;j<tam;j++){
	       	printf("Digite os elementos da matriz[%i][%i]:\n",i+1,j+1);
	        scanf("%i", &A[i][j]);
	        }
	    }
	    
	for (i=0;i<tam;i++){
	        MaiorL[i] = A[i][0]; 
	        MenorC[i] = A[0][i]; 
    }
	
    for (i=0;i<tam;i++){
		for (j=0;j<tam;j++){
            if (A[i][j] > MaiorL[i]){
                MaiorL[i] = A[i][j];
            }
            if (A[i][j] < MenorC[j]){
                MenorC[j] = A[i][j];
            }
        }
    }
    
    printf("\nMatriz A 5X5:\n");
    for (i=0;i<tam;i++){
        for (j=0;j<tam;j++){
            printf("%i\t",A[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor MaiorL:\n");
    for (i=0;i<tam;i++){
        printf("%i\t",MaiorL[i]);
    }

	printf("\n");
	
    printf("\nVetor MenorC:\n");
    for (i=0;i<tam;i++){
        printf("%i\t",MenorC[i]);
    }
    
    printf("\n");
    
	system("pause");
    return 0;
}
