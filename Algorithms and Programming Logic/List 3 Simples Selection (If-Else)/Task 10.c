// Exerc�cio 10
// Fa�a um algoritmo que leia dois valores inteiros A e B se os valores forem iguais dever� se somar os dois, caso contr�rio multiplique A por B. 
// Ao final de qualquer um dos c�lculos deve-se atribuir o resultado para uma vari�vel C e mostrar seu conte�do na tela.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main()
 {
 setlocale(LC_ALL,"");
 int A,B,C;
 
 printf("Digite dois n�meros: ");
 scanf("%i %i",&A,&B);
 
if
	(A==B) 
{
	C=A+B;
	printf("O resultado ser� %i\n",C);}

else 
{
	C=A*B;
 	printf ("O resultado ser� %i\n",C);}

 system("PAUSE");
 return 0;
 }
