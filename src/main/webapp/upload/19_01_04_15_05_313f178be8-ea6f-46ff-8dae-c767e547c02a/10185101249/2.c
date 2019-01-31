#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,i,j,d,e,q=0;
    scanf("%d+%d=%d",&a,&b,&c);
    d=a;
    e=b;
    for(i=0;i<30;i++)
    {
        for(j=0;j<i;j++)
            a*=10;
        if(a+b==c)
        {
            printf("%d",i);
            q=1;
        }
        a=d;
    }
    if(q==0)
       {
           for(i=0;i<30;i++)
    {
        for(j=0;j<i;j++)
            b*=10;
        if(a+b==c)
            printf("-%d",i);
        b=e;
    }
       }
    
    return 0;
}
