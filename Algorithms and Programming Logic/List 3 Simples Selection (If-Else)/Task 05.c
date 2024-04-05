// Exercício 05
// Faça um algoritmo que leia um número e mostra se o número é maior que 20, menor que 20 ou igual a 20.

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
	(num==20) 
	printf("O numero é igual a 20\n");
 
 else 
	{
	if 
		(num > 20) 
		printf (" O numero é maior que 20\n");
	
	else 
		printf (" O numero é menor que 20\n");
	}
 
 system("PAUSE");
 return 0;
 }
