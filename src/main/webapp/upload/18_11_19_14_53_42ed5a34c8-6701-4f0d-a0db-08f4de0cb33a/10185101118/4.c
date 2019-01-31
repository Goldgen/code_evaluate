#include<stdio.h>
void qi(int);
int main()
{
    int n;
    scanf("%d",&n);
    qi(n);
    return 0;
}
void qi(int n)
{
    int d;
    if(n>=2)
    {
        if(n%2==1)d=1;
        else d=0;
    }
    if(n<2)printf("%d",n);
    else
    {
        if(n%2==1)n=(n-1)/2;
        else n/=2;
        qi(n);
        printf("%d",d);
    }
}
