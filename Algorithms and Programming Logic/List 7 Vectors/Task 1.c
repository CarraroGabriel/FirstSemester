// Exerc�cio 1
// Fa�a um programa que l� 10 valores e os armazena em um vetor. Mostre o 1o valor e o 5o valor digitado. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int vet[10],i;
	
	for (i=0;i<=9;i++){
		printf("Digite um valor: \n");
		scanf("%i",&vet[i]);
	}
	
	printf("O primeiro n�mero digitado foi: %i e o quinto valor digitado foi: %i\n",vet[0],vet[4]);
	
	system("pause");
	return 0;
}
