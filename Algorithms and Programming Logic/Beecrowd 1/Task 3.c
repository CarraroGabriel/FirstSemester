#include <stdio.h>
 #include <stdlib.h>
int main() {
    float A,B;
    double MEDIA;
    scanf("%f",&A);
    scanf("%f",&B);
    MEDIA=((A*3.5)+(B*7.5))/11;
    printf("MEDIA = %.5lf\n",MEDIA);
    system("pause");
    return 0;
}
