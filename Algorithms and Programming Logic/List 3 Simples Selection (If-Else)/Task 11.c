// Exerc�cio 11
// Jo�o convidou seus amigos do Facebook para uma confraterniza��o. Ao receber a conta ele resolveu utilizar um algoritmo para calcular o valor que ele e cada um de seus amigos ir� pagar. 
// Fa�a um programa para ler o valor total da conta e a quantidade de amigos do Jo�o que participaram da festa. Calcular e escrever o valor que Jo�o ir� pagar pela conta e o valor pago pelos seus amigos. 
// O programa deve calcular conforme as regras abaixo considere o valor total da conta: - abaixo de R$300,00 Jo�o paga 80% da conta e divide o restante igualmente por seus amigos; - R$300,00 at� R$600,00 Jo�o paga a metade e divide o 
// restante igualmente por seus amigos; - acima de R$ 600,00 a conta e dividida igualmente entre ele e seus amigos.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main()
 {
 setlocale(LC_ALL,"");
 int conta;
 float joao,amigos;
 
 printf("Digite o valor da conta: ");
 scanf("%i",&conta);
 
if
	(conta<300.00){
	joao=conta*0.8;
	amigos=conta-joao;
	printf("Jo�o pagar� R$%.2f e seus amigos R$%.2f\n",joao,amigos);

}else if 
	(conta>300.00 && conta<=600.00){ 	
	joao=conta/2;
	amigos=conta-joao;
	printf("Jo�o pagar� R$%.2f e seus amigos R$%.2f\n",joao,amigos);

}else 
	{
	joao=conta/2;
	amigos=joao;
 	printf("Jo�o pagar� R$%.2f e seus amigos R$%.2f\n",joao,amigos);}

 system("PAUSE");
 return 0;
 }
