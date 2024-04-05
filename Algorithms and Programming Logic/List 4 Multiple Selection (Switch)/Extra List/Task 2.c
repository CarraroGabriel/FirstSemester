// Exercício 2
// Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
// para homens: (72.7 * h) – 58;
// para mulheres: (62.1 * h) – 44.7.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
setlocale(LC_ALL,"");

float altura;
char sexo;

printf("Digite seu sexo (H-Homem, M-Mulher)\n");
scanf("%c",&sexo);
printf("Digite sua altura\n");
scanf("%f",&altura);

switch (sexo){
	case'H': printf("Seu peso ideal será: %.2f kg\n",(72.7*altura)-58.0);break;
	case'M': printf("Seu peso ideal será: %.2f kg\n",(62.1*altura)-44.7);break;
}

system("pause");
return 0;
}
