// Exercício 15
// Faça um programa que gere uma matriz 8X8 preenchendo com ‘X’ as células da área hachurada da matriz abaixo.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define tam 8

int main (){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int i,j;
	char m[tam][tam];
	
		printf("Digite os elementos da Matriz 8x8:\n");
	    for (i=0;i<tam;i++) {
        	for (j=0;j<tam;j++) {
            	m[i][j]=' ';
        }
    }
    
    printf("\nMatriz 8x8:\n");
    for (i=0;i<tam;i++) {
        for (j=0;j<tam;j++) {
            printf("%c\t",m[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal secundária:\n");
    for (i=0;i<tam;i++){
    	for(j=0;j<tam;j++){
    		if(i+j==tam-1){
    			m[i][j]=120;
    		}
		}
	}
    
    for(i=0;i<tam;i++){
    	for(j=0;j<tam;j++){
    	printf("%c\t",m[i][j]);
    	}
    	printf("\n");
	}
    
    system("pause");
    return 0;
}
