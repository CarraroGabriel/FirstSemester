// Exercício 4
// Um vendedor necessita de um programa em C que calcule o preço total devido por um cliente. 
// O programa deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo que deverá ser exibida no programa. 
// Mostrar uma mensagem no caso de código inválido
// Código Produto         Preço Unitário
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
printf("Digite o código do produto:\n");
scanf("%i",&codigo);
printf("Digite a quantidade:\n");
scanf("%i",&quantidade);

switch(codigo){
	case 1001: printf("\nPreço total= R$%.2f\n",quantidade*5.32);break;
	case 1324: printf("\nPreço total= R$%.2f\n",quantidade*6.45);break;
	case 6548: printf("\nPreço total= R$%.2f\n",quantidade*2.37);break;
	case 987: printf("\nPreço total= R$%.2f\n",quantidade*5.32);break;
	case 7623: printf("\nPreço total= R$%.2f\n",quantidade*6.45);break;	
	default: printf("\nCódigo inválido\n");break;
	
}

system("pause");
return 0;
}
