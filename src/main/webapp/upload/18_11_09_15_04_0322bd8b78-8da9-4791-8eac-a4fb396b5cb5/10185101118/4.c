#include<stdio.h>
int main()
{
    long t=20181111;
    int n,h=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        h*=i;
        h%=t;
    }
    printf("%d",h);
    return 0;
}