// Exercício 1
// Ler e calcular o dobro de um número, caso ele seja positivo e o seu triplo seja negativo, imprima o resultado

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");

int num;
printf("Digite um número: \n");
scanf("%i",&num);

if 
	(num>0){
	printf("O dobro do valor é: %i\n",num*2);
	}
else{
	if
		(num<0){
		printf("O triplo do valor é: %i\n",num*3);
		}
else{
	if
		(num==0){
		printf("Digite um valor diferente de zero\n");
}}}

system("pause");
return 0;
}
