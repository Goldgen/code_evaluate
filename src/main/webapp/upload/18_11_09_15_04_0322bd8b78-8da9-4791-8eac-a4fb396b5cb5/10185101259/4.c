#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,i=1,sum=1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
        {sum=sum*i;
sum=sum%20181111;}

    printf("%lld",sum);


    return 0;


}

