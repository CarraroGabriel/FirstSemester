// Exerc�cio 1
// Fazer uma fun��o que retorna a soma, a diferen�a e o produto entre dois n�meros 

#include <stdio.h>
#include <stdlib.h>

double soma(double numA, double numB) {
	return numA + numB;
}

double dif(double numA, double numB) {
	return numA - numB;
}

double prod(double numA, double numB) {
	if(numA <= 0 || numB <= 0)
		return 0; 
		
	return numA * numB;
}

int main() {
	double numA, numB; 
	
	scanf("%lf %lf", &numA, &numB);
	
	printf("\n%.2lf + %.2lf = %.2lf", numA, numB, soma(numA, numB));
	printf("\n%.2lf - %.2lf = %.2lf", numA, numB, dif(numA, numB));
	printf("\n%.2lf * %.2lf = %.2lf", numA, numB, prod(numA, numB));
	
	return 0;
}
