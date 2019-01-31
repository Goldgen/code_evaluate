#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,n;
    int sum;
    scanf("%d %d",&a,&b);
    if(a<b)
        n=a;
    else
        n=b;
    for(i=1;i<=n;++i)
    {
        if(a%i==0&&b%i==0)
            sum=i;
    }
    printf("%d",sum);
    return 0;
}
