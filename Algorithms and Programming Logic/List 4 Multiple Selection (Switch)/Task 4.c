// Exerc�cio 4
// Um vendedor necessita de um programa em C que calcule o pre�o total devido por um cliente. 
// O programa deve receber o c�digo de um produto e a quantidade comprada e calcular o pre�o total, usando a tabela abaixo que dever� ser exibida no programa. 
// Mostrar uma mensagem no caso de c�digo inv�lido
// C�digo Produto         Pre�o Unit�rio
//   1001                     R$5,32
//   1324                     R$6,45
//   6548                     R$2,37
//   0987                     R$5,32
//   7623                     R$6,45


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");

int codigo,quantidade;
printf("Digite o c�digo do produto:\n");
scanf("%i",&codigo);
printf("Digite a quantidade:\n");
scanf("%i",&quantidade);

switch(codigo){
	case 1001: printf("\nPre�o total= R$%.2f\n",quantidade*5.32);break;
	case 1324: printf("\nPre�o total= R$%.2f\n",quantidade*6.45);break;
	case 6548: printf("\nPre�o total= R$%.2f\n",quantidade*2.37);break;
	case 987: printf("\nPre�o total= R$%.2f\n",quantidade*5.32);break;
	case 7623: printf("\nPre�o total= R$%.2f\n",quantidade*6.45);break;	
	default: printf("\nC�digo inv�lido\n");break;
	
}

system("pause");
return 0;
}
