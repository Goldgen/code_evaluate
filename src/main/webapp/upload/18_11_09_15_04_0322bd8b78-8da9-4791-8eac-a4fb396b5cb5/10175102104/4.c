#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long a=1,b;
    int n,x;
    scanf("%d",&n);
    if(n==0)
    {
        printf("0");
    }
    else
    {
       if(n==0)
       {
           printf("1");
       }
       else
       {
           for(x=1;x<=n;x++)
           {
               a=a*x;
           }
           b=a%20181111;
           printf("%llu",b);
       }
    }
    return 0;
}
