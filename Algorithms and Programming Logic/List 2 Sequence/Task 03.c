// Exercício 03
// Escreva um algoritmo para calcular e informar o valor de conversão para graus centígrados de uma temperatura em graus Fahrenheit, sabendo que C=(5*(F-32))/9. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
    float F,C;
    
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);
    
    C=(5*(F-32))/9;
    
    printf("°C= %.2f\n", C);
    
    system("pause");
    return 0;
}

