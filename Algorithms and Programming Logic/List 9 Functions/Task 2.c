// Exerc�cio 2
// Fa�a uma fun��o que realize a convers�o de Polegadas (pol) para Cent�metros (cm), onde pol � passado como par�metro e cm � retornado. Sabe-se que 1 polegada � 2,54 cent�metros.

#include <stdio.h>
#include <stdlib.h>


char cm(double pol) {
	return printf("\n%.2lfcm", pol * 2.54);
}

int main() {
	double pol;
	
	scanf("%lf", &pol);
	cm(pol);
	
	return 0;
}

