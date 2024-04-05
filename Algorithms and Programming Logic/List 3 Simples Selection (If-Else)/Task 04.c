// Exercício 04 
//  Faça um algoritmo que leia um número e mostra se o número é maior que 20.
 
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
 	printf (" O número é maior que 20\n");
 
 else 
 	printf (" O número é menor que 20\n" );
 
 system("PAUSE");
 return 0;
 }
