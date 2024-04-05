#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
	int a,b,c,MaiorAB,MaiorABC;
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	MaiorAB=(a+b+abs(a-b))/2;
	MaiorABC=(MaiorAB+c+abs(MaiorAB-c))/2;
	printf("%i eh o maior\n",MaiorABC);
	system("pause");
    return 0;
}
