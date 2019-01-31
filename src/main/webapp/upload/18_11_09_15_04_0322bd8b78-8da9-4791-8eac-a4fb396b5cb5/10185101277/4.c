#include <stdio.h>
int main(void)
{
    int n,i;
    unsigned long long a=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a*=i;
    }
    a=a%20181111;
    printf("%u",a);
    return 0;
}
