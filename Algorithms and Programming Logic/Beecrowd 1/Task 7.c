#include <stdio.h>
#include <stdlib.h>
 
int main() {
    char nome[16];
    double salario,valor_vendas,TOTAL;
    scanf("%s",&nome);
    scanf("%lf",&salario);
    scanf("%lf",&valor_vendas);
    TOTAL=salario+(valor_vendas*0.15);
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    system("pause");
    return 0;
}
