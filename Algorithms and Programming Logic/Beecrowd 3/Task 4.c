#include <stdio.h>
#include <stdlib.h>

int main()


{


    int n,x,a;


    scanf ("%i", &n);


    for(a=1;a<=n;a++)


    {


        scanf ("%i",&x);


        if(x==0)


            printf("NULL\n");


        else if(x<=0&&x%2==0)


            printf ("EVEN NEGATIVE\n");


        else if(x<=0&&x%2==-1)


            printf ("ODD NEGATIVE\n");


        else if(x>=0&&x%2==0)


            printf ("EVEN POSITIVE\n");


        else if(x>=0&&x%2==1)


            printf ("ODD POSITIVE\n");


    }

system("pause");
return 0;


}
