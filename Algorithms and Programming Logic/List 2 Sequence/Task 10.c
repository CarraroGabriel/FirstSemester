// Exercício 10
// Escreva um algoritmo que leia a distância percorrida por um automóvel (em km) e o intervalo de tempo utilizado para percorrer essa distância (em horas). Calcule e escreva a velocidade média no percurso em km/h.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	double distancia,tempo,km_h;
	
	printf("Digite a distância em km: ");
	scanf("%lf",&distancia);
	
	printf("Digite o tempo levado em horas: ");
	scanf("%lf",&tempo);
	
	km_h=distancia/tempo;
	
	printf("A velocidade média foi de %.2lf km/h\n",km_h);
	
	system("pause");
    return 0;
}
