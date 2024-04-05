// Exerc�cio 3
// Fazer uma fun��o em "C" que retorna a raz�o entre dois n�meros. 
// A fun��o  deve retornar pelo comando return o valor 1 se a opera��o foi poss�vel e o  valor 0 se a opera��o n�o foi poss�vel (divis�o por zero, por exemplo). 
// O resultado da divis�o deve retonar por um par�metro por refer�ncia. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char divisao(double numA, double numB) {
	if(numA == 0 || numB == 0)
		return printf("\nN�o pode realizar divis�o por zero!");
		
		return printf("\n%.2lf / %.2lf = %.2lf", numA, numB, numA / numB);
}

int main() {
	setlocale(LC_ALL,"");
	double numA, numB;
	
	scanf("%lf %lf", &numA, &numB);
	
	divisao(numA, numB);
	
	return 0;
}
