// Exercício 04
// Escreva um algoritmo para calcular o consumo médio de combustível de um automóvel em Km/l. Considere como dados de entrada: quilometragem inicial, quilometragem final, volume de combustível consumido. 

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
	
	printf("Digite a quantidade de litros de combustível gasto: ");
	scanf("%lf",&litros);
	
	km_l=(km_inicial+km_final)/litros;
	
	printf("O consumo médio de combustível é: %.2lf km/l\n",km_l);
	
	system("pause");
    return 0;
}
