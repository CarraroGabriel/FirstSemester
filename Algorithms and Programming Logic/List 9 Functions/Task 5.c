// Exercício 5
// Fazer uma função para ler e retornar o valor das 3 notas de um aluno.

#include <stdio.h>
#include <stdlib.h>

void ler() {
	double n1, n2, n3;
	
	scanf("%lf %lf %lf", &n1, &n2, &n3);
	printf("\n%.2lf %.2lf %.2lf", n1, n2, n3); 
}

int main() {
	ler();
	return 0;
}
