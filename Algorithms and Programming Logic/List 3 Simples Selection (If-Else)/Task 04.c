// Exerc�cio 04 
//  Fa�a um algoritmo que leia um n�mero e mostra se o n�mero � maior que 20.
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main()
 {
 setlocale(LC_ALL,"");
 int num;
 printf( "Digite um numero: ");
 scanf("%i",&num);
 
 if 
 	(num > 20) 
 	printf (" O n�mero � maior que 20\n");
 
 else 
 	printf (" O n�mero � menor que 20\n" );
 
 system("PAUSE");
 return 0;
 }
