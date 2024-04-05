// Exercício 7
// Faça um programa que receba a idade de uma pessoa e mostre na saída em qual categoria ela se encontra: 
// 10-14 infantil
// 15-17 juvenil
// 18-25 adulto

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");

int idade;
printf("Digite sua idade: \n");
scanf("%i",&idade);

if 
	(idade<=10 || idade<=14){
	printf("Infantil\n");
	}
else{
	if
		(idade<=15 || idade<=17){
		printf("Juvenil\n");
		}
	
else{
	if
		(idade<=18){
		printf("Adulto\n");
}}}

system("pause");
return 0;
}
