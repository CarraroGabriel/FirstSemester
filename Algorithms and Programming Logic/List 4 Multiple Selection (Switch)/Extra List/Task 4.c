// Exercício 4
// O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta. A fórmula é IMC = peso / ( altura ) ² . 
// Elabore um programa que leia o peso e a altura de um adulto e mostre sua condição de acordo com a tabela abaixo:
// Abaixo de 18,5 -Abaixo do peso
// Entre 18,5 e 25 -Peso normal
// Entre 25 e 30 -Acima do peso
// Acima de 30 –obeso

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
setlocale(LC_ALL,"");

float peso,altura,IMC;
printf("Informe seu peso: ");
scanf("%f",&peso);

printf("Informe sua altura: ");
scanf("%f",&altura);

IMC=peso/pow(altura,2);

if 
	(IMC<18.5){
	printf("IMC=Abaixo de 18,5 - Você está abaixo do peso!\n");
	}
else{
	if
		(IMC<=25){
		printf("IMC=Entre 18,5 e 25 - Você está com peso normal\n");
		}
else{
	if
		(IMC<=30){
		printf("IMC=Entre 25 e 30 - Você está acima do peso!\n");
		}
else{
	if
		(IMC>30){
		printf("IMC=Acima de 30 - Você está obeso!\n");
		}
}}}

system("pause");
return 0;
}
