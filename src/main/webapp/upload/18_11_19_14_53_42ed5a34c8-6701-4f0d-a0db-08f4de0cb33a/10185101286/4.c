#include<stdio.h>
void shi(int a);
int main()
{
    int shu;
    scanf("%d",&shu);
    shi(shu);
    return 0;
}
void shi(int a)
{
    int b=a%2;
    if(a==0)
    {
        printf("%d",b);
    }
    else if(a==1)
    {
        printf("1");
    }
    else if(a==2)
    {
        printf("10");
    }
    else
    {
        shi(a/2);
        printf("%d",b);
    }
}
