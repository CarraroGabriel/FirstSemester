// Exerc�cio 02 
// Fa�a um algoritmo que leia um n�mero e mostrar se ele � positivo ou negativo
 
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
 	(num > 0)
  	printf (" O n�mero � positivo\n");
  
 else 
 	printf (" O n�mero � negativo\n" );
 
 system("PAUSE");
 return 0;
 }
