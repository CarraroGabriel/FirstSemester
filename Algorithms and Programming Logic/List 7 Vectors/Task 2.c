// Exerc�cio 2
// Fa�a um programa que l� 10 valores e os armazena em um vetor. Mostre os valores que s�o maiores que 50.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int x[10],i;
	
	for (i=0;i<=9;i++){
		printf("Digite um valor: \n");
		scanf("%i",&x[i]);
}
		printf("Os valores maiores que 50 s�o: \n");
		
	for (i=0;i<=9;i++){
		if (x[i]>50) {
			printf("%i\n",x[i]);
		}
}

	system("pause");
	return 0;
}
