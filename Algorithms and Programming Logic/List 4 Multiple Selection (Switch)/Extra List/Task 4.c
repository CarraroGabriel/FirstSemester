// Exerc�cio 4
// O IMC � �ndice de Massa Corporal � um crit�rio da Organiza��o Mundial de Sa�de para dar uma indica��o sobre a condi��o de peso de uma pessoa adulta. A f�rmula � IMC = peso / ( altura ) � . 
// Elabore um programa que leia o peso e a altura de um adulto e mostre sua condi��o de acordo com a tabela abaixo:
// Abaixo de 18,5 -Abaixo do peso
// Entre 18,5 e 25 -Peso normal
// Entre 25 e 30 -Acima do peso
// Acima de 30 �obeso

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
	printf("IMC=Abaixo de 18,5 - Voc� est� abaixo do peso!\n");
	}
else{
	if
		(IMC<=25){
		printf("IMC=Entre 18,5 e 25 - Voc� est� com peso normal\n");
		}
else{
	if
		(IMC<=30){
		printf("IMC=Entre 25 e 30 - Voc� est� acima do peso!\n");
		}
else{
	if
		(IMC>30){
		printf("IMC=Acima de 30 - Voc� est� obeso!\n");
		}
}}}

system("pause");
return 0;
}
