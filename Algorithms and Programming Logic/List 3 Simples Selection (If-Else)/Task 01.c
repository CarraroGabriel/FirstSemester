// Exerc�cio 01 
// Fa�a um algoritmo que l� um n�mero e verificar se ele � par ou � �mpar. 

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
 	(num%2 == 0)
  	printf (" O numero � par\n");
  	
 else 
 	printf (" O valor � impar\n" );
 
 system("PAUSE");
 return 0;
 }
