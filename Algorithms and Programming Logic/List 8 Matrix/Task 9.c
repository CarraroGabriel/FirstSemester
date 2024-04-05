// Exercício 9
// Escrever um algoritmo que leia uma matriz M(2,3) e divida todos os elementos de cada uma das 2 linhas de M pelo maior elemento daquela linha. Escrever a matriz lida e modificada.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int m[2][3];
	int maior[2]={0};
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Digite os valores da matriz[%i][%i] \n",i+1,j+1);
			scanf("%i\n",&m[i][j]);
			if(m[i][j] > maior[i]){
			maior[i] = m[i][j];
			}
		}
	}
	
	printf("\nMatriz[2][3]:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%i\t",m[i][j]);
		}
	printf("\n");	
	}
	
	for (i=0;i<2;i++) {
    	for (j=0;j<3;j++) {
            m[i][j] /= maior[i];
        }
    }

    printf("\nMatriz[2][3] Modificada:\n");
    for (i=0;i<2;i++) {
        for (j=0;j<3;j++) {
            printf("%i\t",m[i][j]);
        }
        printf("\n");
    }
	
	system("pause");
	return 0;
}
