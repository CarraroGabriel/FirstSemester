#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int horas,velocidade,distancia;
	float litros,km_l;
	
	scanf("%i",&horas);
	scanf("%i",&velocidade);
	km_l=12;
	distancia=horas*velocidade;
	litros=distancia/km_l;
	
	printf("%.3f\n",litros);
	
	system("pause");
	return 0;
}
