#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long i=1l;
    long a=1l;
    while(i<=n)
    {
        a=a*i;
        ++i;
    }
    printf("%d",a%20181111);
    return 0;
}
