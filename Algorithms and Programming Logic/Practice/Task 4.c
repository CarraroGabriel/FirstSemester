// Exerc�cio 4
// Um oper�rio que est� construindo um muro, consegue erguer o muro 6 cm por dia. 
// Calcule e escreva quantos dias ser�o necess�rios para que o muro atinja o tamanho desejado pelo propriet�rio.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int dias,muro;
	
	printf("Digite o tamanho do muro desejado (em cm): \n");
	scanf("%i",&muro);
	
	dias= muro/6;
	
	printf("Seu muro levar� %i dias para ficar pronto! \n",dias);
	
	system("pause");
	return 0;
}
