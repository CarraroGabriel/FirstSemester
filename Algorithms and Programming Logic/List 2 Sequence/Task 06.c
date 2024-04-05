// Exercício 06
// Faça um algoritmo para calcular e escrever a tabuada até 10 de um número lido. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
    int x1,x2;
    
    printf("Digite um valor inteiro: ");
    scanf("%i",&x1);
    
    x2=1*x1;
    printf("tabuada de %i x 1 = %i\n",x1,x2);
    
    x2=2*x1;
    printf("tabuada de %i x 2 = %i\n",x1,x2);
    
    x2=3*x1;
    printf("tabuada de %i x 3 = %i\n",x1,x2);
    
    x2=4*x1;
    printf("tabuada de %i x 4 = %i\n",x1,x2);
    
    x2=5*x1;
    printf("tabuada de %i x 5 = %i\n",x1,x2);
    
    x2=6*x1;
    printf("tabuada de %i x 6 = %i\n",x1,x2);
    
    x2=7*x1;
    printf("tabuada de %i x 7 = %i\n",x1,x2);
    
    x2=8*x1;
    printf("tabuada de %i x 8 = %i\n",x1,x2);
    
    x2=9*x1;
    printf("tabuada de %i x 9 = %i\n",x1,x2);
    
    x2=10*x1;
    printf("tabuada de %i x 10 = %i\n",x1,x2);
    
    system("pause");
    return 0;
}
