// Exercício 4
// Escreva um algoritmo que lê uma matriz M(5,5). Substitua, a seguir, todos os valores negativos da matriz por zero. Após, escreva a matriz modificada. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int m[5][5];
	int i,j;
	
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite os valores da matriz[%i][%i] \n",i+1,j+1);
			scanf("%i\n",&m[i][j]);
		}}	
		
	for(i=0;i<5;i++)
		for(j=0;j<5;j++){
			if(m[i][j] < 0){
				m[i][j]=0;
	}}
	
	printf("Matriz modificada:\n");
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            printf("%i", m[i][j]);
        }
        printf("\n");
    }
	
	system("pause");
	return 0;
}
