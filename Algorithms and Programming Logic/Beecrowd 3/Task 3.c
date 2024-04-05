#include<stdio.h>
#include <stdlib.h>

int main(){
  
    int qtd, n, in, out, x;
  
    scanf("%i", &qtd);
    in = 0;
    out = 0;
  
    for(x=0;x<qtd;x++){
        scanf("%i",&n);
        if((n>=10) && (n<=20)){
            in++;
        }else{
            out++;
        }
    }
  
    printf("%i in\n", in);
    printf("%i out\n",out);
    return 0;
}
