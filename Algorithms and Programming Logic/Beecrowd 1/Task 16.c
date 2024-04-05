#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int N,horas,minutos,segundos;
	
	scanf("%i",&N);
	horas=N/3600;
	minutos=(N % 3600)/60;
	segundos=N % 3600 % 60;
	
	printf("%i:%i:%i\n",horas,minutos,segundos);
	system("pause");
	return 0;
}
