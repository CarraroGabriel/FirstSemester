// Exercício 3
// Faça um programa que lê 10 valores e os armazena em um vetor X. Verifique os valores pares digitados, armazene-os em um vetor Y e mostre os valores pares digitados e a quantidade.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int x[10],y[10],i,pares;
	
	for (i=0;i<=9;i++){
		printf("Digite um valor: \n");
		scanf("%i",&x[i]);
	if (x[i]%2==0){
		y[pares]=x[i];
		pares++;
	}
}
	printf("Valores pares digitados: \n");
	
	for (i=0;i<pares;i++){
		printf("%i\n,y[i]");
	}
	
	printf("Quantidade de valores pares digitados: %i \n",pares);
	
	system("pause");
	return 0;
}
