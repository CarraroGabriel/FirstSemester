#include <stdio.h>
#include <stdlib.h>
 
int main(){
	
	int x,y,i,aux,soma_impar=0;
	scanf("%i %i",&x,&y);
	
	if(y<x)
	{
		aux = x;
		x = y+1;
		y = aux;
	}
	for(i=x;i<y;i++){
		if(i%2!=0){
			if(i<0){
				soma_impar-=i*(-1);
			}else{
				soma_impar+=i;
			}
		}
	}
	printf("%i\n",soma_impar);
	return 0;
}
