// Exerc�cio 05
// Fa�a um algoritmo que leia um n�mero e mostra se o n�mero � maior que 20, menor que 20 ou igual a 20.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main()
 {
 setlocale(LC_ALL,"");
 int num;
 printf( "Digite um n�mero: ");
 scanf("%i",&num);
 
 if
	(num==20) 
	printf("O numero � igual a 20\n");
 
 else 
	{
	if 
		(num > 20) 
		printf (" O numero � maior que 20\n");
	
	else 
		printf (" O numero � menor que 20\n");
	}
 
 system("PAUSE");
 return 0;
 }
