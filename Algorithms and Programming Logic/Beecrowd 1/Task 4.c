#include <stdio.h>
#include <stdlib.h>
 
int main() {
    float A,B,C,MEDIA;
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
    MEDIA=((A*2)+(B*3)+(C*5))/10;
    printf("MEDIA = %.1lf\n",MEDIA);
    system("pause");
    return 0;
}
