#include <stdio.h>
#include <stdlib.h>

int sum(int a)
{
    static int i=0,b[100],sum1=0;
    if((a/10)==0)
    {
        b[i]=a%10;
        ++i;
        for(int j=0;j<i;++j)
        sum1+=b[j];
    }
    else
    {
        b[i]=a%10;
        ++i;
        a=sum(a/10);
    }

    return sum1;
}

int main()
{
    int a=0;
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}
