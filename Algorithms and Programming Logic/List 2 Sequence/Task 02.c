// Exerc�cio 02
// Escreva um algoritmo que leia dois valores num�ricos inteiros, armazenando-os em duas vari�veis (a e b). O algoritmo dever� trocar o valor das duas vari�veis, de tal forma que em a fique armazenado o valor de b e vice-versa. Ao final, o algoritmo dever� escrever os valores de a e b.

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
    
    printf("O valor de A �: %i\n",a);
    printf("O valor de B �: %i\n",b);
    
    system("pause");
    return 0;
}
