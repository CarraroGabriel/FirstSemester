// Exercício 07
// Ler um valor inteiro e escrever seu antecessor e seu sucessor. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
    int num,sucessor,antecessor;
    
    printf("Digite um valor inteiro: ");
    scanf("%i",&num);
    
    sucessor=num+1;
    antecessor=num-1;
    
    printf("\nAntecessor: %i\n",antecessor);
    printf("Valor Digitado: %i\n",num);
    printf("Sucessor: %i\n",sucessor);
    
    system("pause");
    return 0;
}
