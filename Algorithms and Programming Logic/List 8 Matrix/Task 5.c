// Exercício 5
// Elaborar um algoritmo que lê uma matriz M(4,4) e um valor A. Após, multiplique a matriz M pelo valor A e coloque os valores da matriz multiplicados por A em uma matriz N(4,4). Ao final, escreva a matriz N. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int m[4][4];
	int n[4][4];
	int i,j,A;
	
	printf("Digite o valor de A:\n");
	scanf("%i",&A);
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite os valores da matriz[%i][%i] \n",i+1,j+1);
			scanf("%i\n",&m[i][j]);
			n[i][j]=m[i][j]*A;
		}
	}
	
	printf("Matriz n[4][4]:\n");
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("%i ", n[i][j]);
        }
        printf("\n");
    }
	
	system ("pause");
	return 0;
}
