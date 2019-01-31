#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int sum;
    int a;
    int b;
    int i;
    int d;
    int e;
    int flag;
    scanf("%d",&sum);
    int c=(int)sum/2;
    printf("%d",sum);
    for(a=3;a<=c;++a)
    {
        d=(int)sqrt(a);
        b=sum-a;
        e=(int)sqrt(b);
        flag=1;
        for(i=2;i<=d;++i)
        {
            if(a%i==0)
                {
                    flag=0;
                    break;
                }
        }
        for(i=2;i<=e;++i)
        {
            if(b%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag!=0&&a%2!=0&&b%2!=0)
        printf("=%d+%d",a,b);
    }
    return 0;
}