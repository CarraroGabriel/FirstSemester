// Exerc�cio 1
// Ler e calcular o dobro de um n�mero, caso ele seja positivo e o seu triplo seja negativo, imprima o resultado

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");

int num;
printf("Digite um n�mero: \n");
scanf("%i",&num);

if 
	(num>0){
	printf("O dobro do valor �: %i\n",num*2);
	}
else{
	if
		(num<0){
		printf("O triplo do valor �: %i\n",num*3);
		}
else{
	if
		(num==0){
		printf("Digite um valor diferente de zero\n");
}}}

system("pause");
return 0;
}
