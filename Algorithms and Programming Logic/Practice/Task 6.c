// Exerc�cio 6
// Fa�a um programa que leia a nota final de 5 alunos. Escreva no final, a maior e a menor nota, a m�dia das notas e a quantidade de notas acima da m�dia.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int cont=0;
	float nota,maior=0,menor=10,qntd_notas, media,soma;
	
	for (int i = 0; i < 5; i++){
		printf("Digite a nota do aluno %i: ",i+1);
		scanf("%f",&nota);
	
	if (nota > maior){
		maior=nota;
	}
	if (nota < menor){
		menor=nota;
	}
	if (nota > 6){
		cont++;
	}
	 soma += nota;
	}
	
	media= soma/5;
	
	printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
	printf("M�dia das notas: %.2f\n", media);
    printf("Notas acima da m�dia: %i\n", cont);
    
	system("pause");
	return 0;
}
