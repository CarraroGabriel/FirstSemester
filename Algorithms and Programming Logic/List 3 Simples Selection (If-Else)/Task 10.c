// Exercício 10
// Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois, caso contrário multiplique A por B. 
// Ao final de qualquer um dos cálculos deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main()
 {
 setlocale(LC_ALL,"");
 int A,B,C;
 
 printf("Digite dois números: ");
 scanf("%i %i",&A,&B);
 
if
	(A==B) 
{
	C=A+B;
	printf("O resultado será %i\n",C);}

else 
{
	C=A*B;
 	printf ("O resultado será %i\n",C);}

 system("PAUSE");
 return 0;
 }
