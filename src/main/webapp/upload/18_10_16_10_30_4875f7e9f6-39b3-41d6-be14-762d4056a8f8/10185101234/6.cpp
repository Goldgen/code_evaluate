#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        if(b>c)
            printf("%d",b);
        else
            printf("%d",c);
    }
    else
    {
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
    return 0;
}