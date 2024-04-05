// Exercício 4
// Um operário que está construindo um muro, consegue erguer o muro 6 cm por dia. 
// Calcule e escreva quantos dias serão necessários para que o muro atinja o tamanho desejado pelo proprietário.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int dias,muro;
	
	printf("Digite o tamanho do muro desejado (em cm): \n");
	scanf("%i",&muro);
	
	dias= muro/6;
	
	printf("Seu muro levará %i dias para ficar pronto! \n",dias);
	
	system("pause");
	return 0;
}
