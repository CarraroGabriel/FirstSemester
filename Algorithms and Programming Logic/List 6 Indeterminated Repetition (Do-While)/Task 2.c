// Exerc�cio 2
// Fa�a  um  programa  que  mostra  os  n�meros  entre  121  e  201  de  3  em  3  (usando DO WHILE).

#include <stdio.h>
#include <stdlib.h>

int main (){
	int x=121;
	
do
{
	printf("%i\n",x);
	x+=3;
} 	
while (x>=121 && x<=201);
	
	system ("pause");
	return 0;
}
