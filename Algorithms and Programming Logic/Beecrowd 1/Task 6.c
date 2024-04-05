#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int num;
    double horas, salario_h, total;
    scanf("%i", &num);
    scanf("%lf", &horas);
    scanf("%lf", &salario_h);
    total=horas*salario_h;
    printf("NUMBER = %i\n", num);
    printf("SALARY = U$ %.2lf\n", total);
    system("pause");
    return 0;
}
