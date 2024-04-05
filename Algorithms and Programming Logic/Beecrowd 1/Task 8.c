#include <stdio.h>
#include <stdlib.h>
 
int main() {
	int cod_1,numero_pecas1,cod_2,numero_pecas2;
	double valor_1,valor_2,valor_total;
	scanf("%i",&cod_1);
	scanf("%i",&numero_pecas1);
	scanf("%lf",&valor_1);
	scanf("%i",&cod_2);
	scanf("%i",&numero_pecas2);
	scanf("%lf",&valor_2);
	valor_total=(numero_pecas1*valor_1)+(numero_pecas2*valor_2);
	printf("VALOR A PAGAR: R$ %.2lf\n",valor_total);
	system("pause");
    return 0;
}
