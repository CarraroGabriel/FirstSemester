// Exerc�cio 2
// Construir um programa em C que converta um valor lido em reais para um valor em moeda estrangeira escrevendo o resultado utilizando a seguinte codifica��o:
// 1 - libra esterlina (R$ 3,80)
// 2 - franco sui�o (R$ 1,85)
// 3 - d�lar americano (R$ 2,43)
// 4 - marco alem�o (R$ 2,31)
// O Programa dever� exibir o menu acima e o resultado utilizando uma mensagem adequada. Use uma fun��o para calcular a convers�o da moeda.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");

int real,moeda;
printf("Digite seu valor em reais:\n");
scanf("%i",&real);
printf("Digite a convers�o de moeda desejada:\n");
printf("\n 1-libra esterlina (R$3,80)\n 2-franco sui�o (R$1,85)\n 3-d�lar americano (R$2,43)\n 4-marco alem�o (R$2,31)\n");
scanf("%i",&moeda);

switch(moeda){
	case 1: printf("\n�%.2f\n",real/3.80);break;
	case 2: printf("\nFr%.2f\n",real/1.85);break;
	case 3: printf("\nU$%.2f\n",real/2.43);break;
	case 4: printf("\nDM%.2f\n",real/2.31);break;
	default: printf("\nDigite uma moeda v�lida\n");break;
	
}

system("pause");
return 0;
}
