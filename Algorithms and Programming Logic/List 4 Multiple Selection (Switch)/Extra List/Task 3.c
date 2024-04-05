// Exercício 3
// Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso sexo seja “F” e estado civil seja “CASADA”, solicitar o tempo de casada (anos).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");

char nome,sexo,estado_civil;
int tempo_casada;
printf("Digite seu nome: \n");
scanf("%c", &nome);
fflush(stdin);

printf("Digite seu sexo (Sendo F-Feminino,M-Masculino,O-Outro): \n");
scanf("%c", &sexo);
fflush(stdin);

printf("Digite seu estado civil (Sendo C-Casado(a),S-Solteiro(a),V-Viúvo(a)): \n");
scanf("%c", &estado_civil);
fflush(stdin);

if 
	(sexo=='F' && estado_civil=='C'){
	printf("Digite seu tempo de casada:\n");
	scanf("%i", &tempo_casada);}
	
		
system("pause");
return 0;
}
