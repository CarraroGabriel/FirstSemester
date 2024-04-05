// Exercício 01 
// Faça um algoritmo que lê um número e verificar se ele é par ou é ímpar. 

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
 	(num%2 == 0)
  	printf (" O numero é par\n");
  	
 else 
 	printf (" O valor é impar\n" );
 
 system("PAUSE");
 return 0;
 }
