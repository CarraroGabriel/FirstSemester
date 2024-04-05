// Exercício 03 
// Faça um algoritmo que leia um número e mostrar se ele é positivo, negativo ou igual a zero.
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main()
 
 {
 setlocale(LC_ALL,"");
 int num;
 printf( "Digite um número: ");
 scanf("%i",&num);
 
 if
	(num==0) 
	printf("O número é neutro\n");
 
 else 
	{
	if (num > 0) printf (" O número é positivo\n");
	else printf (" O número é negativo\n");
	}
 
 system("PAUSE");
 return 0;
 }
