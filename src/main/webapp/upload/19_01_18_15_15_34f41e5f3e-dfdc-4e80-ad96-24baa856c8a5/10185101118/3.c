#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,v,j;
    scanf("%d",&n);
    printf("%d",n);
    for(a=3;a<=n/2;a++)
    {
        b=n-a;
        for(v=2;v<=floor(sqrt(a));v++)
            if(a%v==0)break;
        for(j=2;j<=floor(sqrt(b));j++)
            if(b%j==0)break;
        if(floor(sqrt(a))+1==v&&floor(sqrt(b))+1==j)
            printf("=%d+%d",a,b);
    }
    return 0;
}