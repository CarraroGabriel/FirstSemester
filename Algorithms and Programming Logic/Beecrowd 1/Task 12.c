#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
	int km;
	double litros,km_l;
	scanf("%i",&km);
	scanf("%lf",&litros);
	km_l=km/litros;
	printf("%.3lf km/l\n",km_l);
	system("pause");
    return 0;
}
