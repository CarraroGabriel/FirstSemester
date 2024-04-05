// Exercício 02
// Escreva um algoritmo que leia dois valores numéricos inteiros, armazenando-os em duas variáveis (a e b). O algoritmo deverá trocar o valor das duas variáveis, de tal forma que em a fique armazenado o valor de b e vice-versa. Ao final, o algoritmo deverá escrever os valores de a e b.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
    int a,b,c;
    
    printf("Digite um valor para A: ");
    scanf("%i",&a);
    
    printf("Digite um valor para B: ");
    scanf("%i",&b);
    
    c=a;
    a=b;
    b=c;
    
    printf("O valor de A é: %i\n",a);
    printf("O valor de B é: %i\n",b);
    
    system("pause");
    return 0;
}
