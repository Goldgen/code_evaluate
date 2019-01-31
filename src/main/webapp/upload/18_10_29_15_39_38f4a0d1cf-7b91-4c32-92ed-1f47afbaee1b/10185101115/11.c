#include <stdio.h>
int main()
{int a,b,c;
for(int n=100;n<=999;n++)
{
    a=n/100;
    b=n/10-a*10;
    c=n%10;
    if(n==a*a*a+b*b*b+c*c*c)
    {
        if(n<407)
        {
             printf("%d ",n);
        }
        if(n>=407)
        {
            printf("%d",n);
        }

    }
}
return 0;
}