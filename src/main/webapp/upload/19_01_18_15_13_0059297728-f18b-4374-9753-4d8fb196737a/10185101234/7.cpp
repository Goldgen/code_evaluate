#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(b>a)
    {
        if(b>c)
            {
                if(b>d)
                    printf("%d",b);
                else
                    printf("%d",d);
            }
        else
            {
                if(d>c)
                    printf("%d",d);
                else
                    printf("%d",c);
            }
    }
    else
    {
        if(a>c)
            {
                if(a>d)
                    printf("%d",a);
                else
                    printf("%d",d);
            }
        else
            {
                if(c>d)
                    printf("%d",c);
                else
                    printf("%d",d);
            }
    }
    return 0;
}
