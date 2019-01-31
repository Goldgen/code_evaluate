#include<stdio.h>
int main()
{
    int n;
    unsigned long long a,b,c,d;
    a=b=1;
    scanf("%d",&n);
    if(n==0)
        printf("1");
    else
	{
    for(b=1;b<=n;b++)
    {
        a=b*a;
    }
    c=a/((unsigned long long)20181111);
    d=a-20181111*c;
    printf("%llu",d);
    }
    return 0;
}
