// Exercício 08
// Faça um programa que leia três notas de um aluno. Calcule a média aritmética das notas. Após, escreva na tela se foi aprovado ou reprovado, caso atinja média igual ou maior a sete.

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
