// Exercício 06
//  Faça um programa que leia dois valores inteiros. Verifique o maior deles e imprima na tela o resultado

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main()
 {
 setlocale(LC_ALL,"");
 int num1,num2;
 printf( "Digite o primeiro valor: ");
 scanf("%i",&num1);
 printf("Digite o segundo valor: ");
 scanf("%i",&num2);
 
 if
	(num1>num2) 
	printf("%i é maior que %i\n",num1,num2);
 
 else 
	printf ("%i é maior que %i\n",num2,num1);

 
 system("PAUSE");
 return 0;
 }
