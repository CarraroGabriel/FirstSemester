// Exerc�cio 09
//  Desenvolva um Algoritmo que leia 3 n�meros e escreve o maior.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main()
 {
 setlocale(LC_ALL,"");
 int num1,num2,num3;
 float media;
 
 printf("Digite tr�s n�meros: ");
 scanf("%i %i %i",&num1,&num2,&num3);
 
if
	(num1>num2 && num1>num3){
	printf("O maior valor � %i\n",num1);
 
 }else if 
 	(num2>num1 && num2>num3) {
 	printf (" O maior valor � %i\n",num2);
 	
}else {
 	printf (" O maior n�mero � %i\n",num3);
}
 system("PAUSE");
 return 0;
 }
