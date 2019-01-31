#include<stdio.h>
int GDB(int a,int b);
int main()
{
    int shu1,shu2;
    scanf("%d %d",&shu1,&shu2);
    printf("%d",GDB(shu1,shu2));
    return 0;
}
int GDB(int a,int b)
{
    int i;
    if(a==b)
    {
        return a;
    }
    else if(a<b)
    {
        i=a;
        a=b;
        b=i;
    }
    if(b==0)
    {
        return a;
    }
    else if(a%b==0)
    {
        return b;
    }
    else
    {
        GDB(b,a%b);
    }
}
