// Exerc�cio 04
// Escreva um algoritmo para calcular o consumo m�dio de combust�vel de um autom�vel em Km/l. Considere como dados de entrada: quilometragem inicial, quilometragem final, volume de combust�vel consumido. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	double km_inicial,km_final,litros,km_l;
	
	printf("Digite a quilometragem inicial: ");
	scanf("%lf",&km_inicial);
	
	printf("Digite a quilometragem final: ");
	scanf("%lf",&km_final);
	
	printf("Digite a quantidade de litros de combust�vel gasto: ");
	scanf("%lf",&litros);
	
	km_l=(km_inicial+km_final)/litros;
	
	printf("O consumo m�dio de combust�vel �: %.2lf km/l\n",km_l);
	
	system("pause");
    return 0;
}
