// Exercício 3
// Modifique o programa anterior, de forma a informar quantos valores diferentes de A estão na matriz M. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int m[5][5];
	int A,i,j;
	int cont=0;
	
	printf("Digite o valor de A:\n");
	scanf("%i",&A);


	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite os valores da matriz[%i][%i] \n",i+1,j+1);
			scanf("%i\n",&m[i][j]);
		}}
	
	for(i=0;i<5;i++)
		for(j=0;j<5;j++){
			if(m[i][j]!= A){
				cont++;
	}}

	printf("Existem %i valores diferentes de A\n",cont);

system("pause");
return 0;
}

