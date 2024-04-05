// Exercício 20
// Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. 
// Sabendo que cada cartela devera conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas. 
// O programa deve exibir na tela a cartela gerada de modo a não ter números repetidos dentro das cartelas.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define tam 5

int main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int m[tam][tam] = {0};
    int sort[100] = {0};
    int cont = 0;
    int i,j,num;
    
    for (i=0;i<tam;i++){
    	for (j=0;j<tam;j++){
    		num = rand() % 100;
			m[i][j] = num;
			sort[num] = 1;
			cont++;
    	}
    }
    	
    printf("Cartela de Bingo:\n");
    for (i=0;i<tam;i++){
    	for (j=0;j<tam;j++){
    		printf("%i ",m[i][j]);
    		}
    		printf("\n");
    	}

	system("pause");
    return 0;
}
