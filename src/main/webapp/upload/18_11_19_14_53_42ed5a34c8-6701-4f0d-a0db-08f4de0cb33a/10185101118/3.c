#include<stdio.h>
int dou(void);
int i=0;
int main()
{
    dou();
    return 0;
}
int dou()
{
    int n,a=0;
    scanf("%d",&n);
    if(n<=0)return 1;
    if(0==a)a=dou();
    if(i)printf(" %d",n);
    else
    {
        printf("%d",n);
        i=1;
    }
}