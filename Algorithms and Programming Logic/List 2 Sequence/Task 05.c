// Exerc�cio 05
// Escreva um algoritmo que leia dois valores num�ricos do tipo inteiro e escreva o resultado da soma dos quadrados destes n�meros e o resultado da divis�o dos dois valores.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
    float a,b,divisao,quadrado;
    
    printf("Digite um valor para A:");
    scanf("%f",&a);
    
    printf("Digite um valor para B:");
    scanf("%f",&b);
    
    pow(a,2);
    pow(b,2);
    quadrado= pow(a,2)+pow(b,2);
    
	divisao=a/b;
    
    printf("A soma do quadrado do valores �: %.2f\n",quadrado);
    printf("A divis�o dos valores �: %.2f\n",divisao);
    
    system("pause");
    return 0;
}
