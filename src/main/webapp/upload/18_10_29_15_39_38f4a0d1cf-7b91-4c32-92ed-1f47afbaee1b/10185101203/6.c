#include <stdio.h>
int main()
{
int a,b,c,d;
scanf("%d %d",&a,&b);
if(a>=b)
    a=a,b=b;
    else
    {c=a;
    a=b;
    b=c;
    }
    while(a%b!=0)
    {d=a%b;
    a=b;
    b=d;}
    printf("最大公约数是:%d",b);
}
