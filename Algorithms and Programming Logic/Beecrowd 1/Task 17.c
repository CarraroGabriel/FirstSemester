#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
	int idade,dias,meses,anos;
	
	scanf("%i",&idade);
	anos=idade/365;
	meses=(idade % 365)/30;
	dias=idade % 365 % 30;
	
	printf("\n %i ano(s)\n %i mes(es)\n %i dia(s)\n",anos,meses,dias);
	system("pause");
    return 0;
}

