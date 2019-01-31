#include <stdio.h>
#include <stdlib.h>

int calcu(int a,int b);

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    calcu(a,b);
    return 0;
}

int calcu(int a,int b)
{
    int c;
    if(b>a)
    {
        c=a;
        a=b;
        b=c;
    }
    if(a%b==0)
    {
        printf("%d",b);
        return 0;
    }
    else
    {
        c=a;
        a=b;
        b=c%a;
        calcu(a,b);
    }
}
