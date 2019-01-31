#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c,i,m;
    scanf("%d",&c);
    printf("%d",c);
for(a=2;a<=c/2;a++)
{

    for(i=2;i*i<=a;i++)
        if(a%i==0)
            break;
        if(i*i>a)
        {b=c-a;
           for(m=2;m*m<=b;m++)
            if(b%m==0)break;
                if(m*m>b)
            printf("=%d+%d",a,b);}
}
}