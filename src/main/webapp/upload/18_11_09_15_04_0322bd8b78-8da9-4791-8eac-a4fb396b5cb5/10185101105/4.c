#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k;
    unsigned long long s1=1,j,s2;
    scanf("%d",&n);
    if(n==0)
    printf("1");
    else{
    if(n<=60)
    {

    for(i=1;i<=n;++i)
    {
        s1*=i;
    }
    j=s1%20181111;
    printf("%llu",j);

    }
    else
    {
        for(i=1;i<=60;++i)
            s1*=i;

        s2=s1%20181111;
        for(k=1;k<=n-60;++k)
            s2*=k;
            j=s2%20181111;
            printf("%llu",j);
    }
    }
    return 0;
}
