// Exerc�cio 08
// Fa�a um programa que leia tr�s notas de um aluno. Calcule a m�dia aritm�tica das notas. Ap�s, escreva na tela se foi aprovado ou reprovado, caso atinja m�dia igual ou maior a sete.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main()
 {
 setlocale(LC_ALL,"");
 int nota1,nota2,nota3;
 float media;
 
 printf( "Digite suas notas: ");
 scanf("%i %i %i",&nota1,&nota2,&nota3);
 media=(nota1+nota2+nota3)/3;
 
 if
	(media>=7)
	printf("APROVADO\n");
 
 else 
	printf ("REPROVADO\n");

 system("PAUSE");
 return 0;
 }
