// Exerc�cio 10
// Escreva um algoritmo que leia a dist�ncia percorrida por um autom�vel (em km) e o intervalo de tempo utilizado para percorrer essa dist�ncia (em horas). Calcule e escreva a velocidade m�dia no percurso em km/h.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	double distancia,tempo,km_h;
	
	printf("Digite a dist�ncia em km: ");
	scanf("%lf",&distancia);
	
	printf("Digite o tempo levado em horas: ");
	scanf("%lf",&tempo);
	
	km_h=distancia/tempo;
	
	printf("A velocidade m�dia foi de %.2lf km/h\n",km_h);
	
	system("pause");
    return 0;
}
