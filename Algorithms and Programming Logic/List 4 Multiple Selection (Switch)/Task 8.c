// Exercício 8
// Faça um programa que receba a idade de uma pessoa e mostre na saída em qual categoria ela se encontra:
// 10-14 infantil
// 15-17 juvenil
// 18-25 adulto

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
setlocale(LC_ALL,"");

int idade;
printf("Digite sua idade:\n");
scanf("%i",&idade);

switch(idade){
	case 10: printf("\ninfantil\n");break;
	case 11: printf("\ninfantil\n");break;
	case 12: printf("\ninfantil\n");break;
	case 13: printf("\ninfantil\n");break;
	case 14: printf("\ninfantil\n");break;
	case 15: printf("\njuvenil\n");break;
	case 16: printf("\njuvenil\n");break;
	case 17: printf("\njuvenil\n");break;
	case 18: printf("\nadulto\n");break;
	case 19: printf("\nadulto\n");break;
	case 20: printf("\nadulto\n");break;
	case 21: printf("\nadulto\n");break;
	case 22: printf("\nadulto\n");break;
	case 23: printf("\nadulto\n");break;
	case 24: printf("\nadulto\n");break;
	case 25: printf("\nadulto\n");break;
}

system("pause");
return 0;
}
