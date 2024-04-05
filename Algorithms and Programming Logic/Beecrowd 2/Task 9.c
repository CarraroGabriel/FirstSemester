#include <stdio.h>
#include <stdlib.h>

int main (){
int A,B,C,X,Y,Z,comparador;

scanf("%i %i %i",&A,&B,&C);
X=A;
Y=B;
Z=C;

if 
	(X>Y){
	comparador=X;
	X=Y;
	Y=comparador;
}
	
if
	(X>Z){
	comparador=X;
	X=Z;
	Z=comparador;
}

if
	(Y>Z){
	comparador=Y;
	Y=Z;
	Z=comparador;	
	}

printf("%i\n%i\n%i\n",X,Y,Z);
printf("\n%i\n%i\n%i\n",A,B,C);

system("pause");
return 0;
}
