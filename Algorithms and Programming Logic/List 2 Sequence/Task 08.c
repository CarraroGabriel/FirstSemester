// Exerc�cio 08
// Escreva um algoritmo para ler o raio de um c�rculo, calcular e escrever a sua �rea.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	double raio,circulo,pi;
	
	printf("Digite o valor do raio: ");
	scanf("%lf",&raio);
	pi=3.14159;
	pow(raio,2);
	circulo=pi*pow(raio,2);
	
	printf("A �rea do c�rculo ser�: %.2lf\n",circulo);
	system("pause");
    return 0;
}
