// Exerc�cio 07
// Fa�a um programa para solicitar o sal�rio e o valor da presta��o. Se a presta��o for maior que 20% do salario, imprimir : �Empr�stimo n�o pode ser concedido !�. Sen�o imprimir �Empr�stimo Concedido�.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main()
 {
 setlocale(LC_ALL,"");
 int salario,prestacao;
 
 printf( "Digite seu sal�rio: ");
 scanf("%i",&salario);
 printf("Digite a presta��o: ");
 scanf("%i",&prestacao);
 
 if
	(prestacao>0.2*salario)
	printf("Empr�stimo n�o concedido!\n");
 
 else 
	printf ("Emprestimo concedido\n");

 system("PAUSE");
 return 0;
 }
