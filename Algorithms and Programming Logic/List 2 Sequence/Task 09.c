// Exercício 09
// Escreva um algoritmo para ler as dimensões de uma cozinha retangular (comprimento, largura e altura). Calcular e escrever a quantidade de caixas de azulejos para se colocar em todas as suas paredes (considere que não será descontada a área ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 m2. 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
	double comprimento,largura,altura,caixas,area,azulejos;
	
	printf("Digite o comprimento da cozinha: ");
	scanf("%lf",&comprimento);
	
	printf("Digite a largura da cozinha: ");
	scanf("%lf",&largura);
	
	printf("Digite a altura da cozinha: ");
	scanf("%lf",&altura);
	
	area=((comprimento*altura)*2)+((largura*altura)*2);
	azulejos=1.5;
	caixas=area/azulejos;
	
	printf("Serão necessárias %.2lf caixas de azulejo\n",caixas);
	system("pause");
    return 0;
}
