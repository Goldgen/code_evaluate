#include <stdio.h>
int main()
{
    int n,t=20181111,i,sum=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        sum*=i;
        sum=sum%t;
    }
    printf("%d",sum);
}