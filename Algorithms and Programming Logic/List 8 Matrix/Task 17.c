// Exercício 17
// Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 4

int main(){
	setlocale(LC_ALL,"");
	
	int m[tam][tam];
	int i,j;
	int cont=0;
	
	for (i=0;i<tam;i++){
       	for (j=0;j<tam;j++){
	       	printf("Digite os elementos da matriz[%i][%i]:\n",i+1,j+1);
	        scanf("%i", &m[i][j]);
	        if (m[i][j]>10){
                cont++;
            }
	    }
	    printf("\n");
	}
	
	printf("A matriz apresenta %i valores maiores que 10 \n",cont);
	
	system("pause");
	return 0;
}
