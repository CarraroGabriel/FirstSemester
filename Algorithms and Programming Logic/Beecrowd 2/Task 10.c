#include <stdio.h>
#include <stdlib.h>

int main (){
	int inicio,fim;
	scanf("%i %i",&inicio,&fim);
	
	if
		(inicio==fim){
		printf("O JOGO DUROU %i HORA(S)\n",24-inicio+fim);
		}
	else if
		(inicio<=fim){
		printf("O JOGO DUROU %i HORA(S)\n",fim-inicio);
		}
	else
		printf("O JOGO DUROU %i HORA(S)\n",24-inicio+fim);
		
	system("pause");
	return 0;
}
