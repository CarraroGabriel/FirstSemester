// Exercício 07
// Faça um programa para solicitar o salário e o valor da prestação. Se a prestação for maior que 20% do salario, imprimir : “Empréstimo não pode ser concedido !”. Senão imprimir “Empréstimo Concedido”.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main()
 {
 setlocale(LC_ALL,"");
 int salario,prestacao;
 
 printf( "Digite seu salário: ");
 scanf("%i",&salario);
 printf("Digite a prestação: ");
 scanf("%i",&prestacao);
 
 if
	(prestacao>0.2*salario)
	printf("Empréstimo não concedido!\n");
 
 else 
	printf ("Emprestimo concedido\n");

 system("PAUSE");
 return 0;
 }
