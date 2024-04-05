// Exercício 1
// Uma fábrica de camisetas produz os tamanhos P, M e G, cada uma sendo vendida respectivamente por 15, 18 e 22 Reais cada. 
// Faça um algoritmo que leia o código do tamanho da camiseta (P, M ou G) e a quantidade vendida. Calcule o valor total da venda e escreva no final.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int quantidade,valor_total;
	char codigo;
	
	printf("Digite o tamanho da camiseta comprada: \n");
	scanf("%c",&codigo);
	
	
	printf("Digite a quantidade comprada: \n");
	scanf("%d",&quantidade);
	
		switch (codigo){
		case 'P': valor_total=quantidade*15;break;
		case 'M': valor_total=quantidade*18;break;
		case 'G': valor_total=quantidade*22;break;
	}
	
	printf("O valor total da compra será: R$%d \n",valor_total);
	
	system("pause");
	return 0;
}
