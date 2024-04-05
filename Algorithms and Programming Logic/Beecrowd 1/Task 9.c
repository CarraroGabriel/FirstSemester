#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
	double R,VOLUME,pi;
	pi=3.14159;
	scanf("%lf",&R);
	R= pow(R,3);
	VOLUME=(4/3.0)*pi*R;
	printf("VOLUME = %.3lf\n",VOLUME);
	system("pause");
    return 0;
}
