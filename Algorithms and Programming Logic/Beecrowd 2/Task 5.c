#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
double raio,area,n;

scanf("%lf",&raio);
n=3.14159;
area=n*pow(raio,2);
	
printf("A=%.4lf\n",area);

system("pause");
return 0;
}
