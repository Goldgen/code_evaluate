#include<stdio.h>
int main()
{
    int n;
    int i=1;
    long long unsigned int mod=1;
    long long unsigned int yu;
    scanf("%d",&n);
    if(n==1)
        printf("1");
    else
    {
        while(i<=n)
        {
            mod=mod*i;
            i++;
        }
        yu = mod%20181111;
        printf("%llu",yu);
    }
    return 0;
}