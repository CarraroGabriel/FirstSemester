// Exerc�cio 01
// Escreva um algoritmo que tenha como entrada o n�mero de horas que um  funcion�rio trabalhou e o valor da hora trabalhada. O algoritmo dever� calcular e escrever o sal�rio que este funcion�rio ir� receber 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	int horas;
    float salario_h,total;
    
    printf("Digite o n�mero de horas trabalhadas: ");
    scanf("%i",&horas);
    
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f",&salario_h);
    
    total=horas*salario_h;
    
    printf("O sal�rio do funcion�rio ser�: R$%.2f\n",total);
    
    system("pause");
    return 0;
}
