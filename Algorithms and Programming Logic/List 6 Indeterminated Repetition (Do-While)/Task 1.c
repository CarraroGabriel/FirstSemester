// Exercício 1
// Faça  um  programa  que  mostra  os  números entre  121  e  201  de  3  em  3  (usando WHILE).

#include <stdio.h>
#include <stdlib.h>

int main (){
	int x=121;
	
	while (x>=121 && x<=201)
	{
		printf("%i\n",x);
		x+=3;
	}
	
	system ("pause");
	return 0;
}
