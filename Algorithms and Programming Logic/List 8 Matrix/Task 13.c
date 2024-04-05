// Exerc�cio 13
// Fa�a um programa que leia uma matriz de 3 colunas e 4 linhas. Depois de l�-la, some as colunas individualmente e acumule a soma na 5� linha da matriz. 
// Mostrar a matriz j� com a 5� linha preenchida. (Lembre-se: para guardar o resultado � necess�rio declarar uma matriz de 3X5).


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int m[4][3];
	int SC[3]={0};
	int i,j;
	
    for (i=0;i<4;i++) {
        for (j=0;j<3;j++) {
        	printf("Digite os elementos da matriz[%i][%i]:\n",i+1,j+1);
            scanf("%i", &m[i][j]);
            SC[j] += m[i][j];
        }
    }

    for (j=0;j<3;j++) {
        m[4][j] = SC[j];
    }

    printf("Matriz com a 5� linha:\n");
    for (i=0;i<5;i++) {
        for (j=0;j<3;j++) {
            printf("%i\t", m[i][j]);
        }
        printf("\n");
    }
	
	system("pause");
    return 0;
}
