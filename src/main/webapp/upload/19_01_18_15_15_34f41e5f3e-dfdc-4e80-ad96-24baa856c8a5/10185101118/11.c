#include<stdio.h>
int main()
{
    int a=1,b,c,n=1,d=1;
    for(;a<=9;a++)
        for(b=0;b<=9;b++)
            for(c=0;c<=9;c++)
                if(100*a+10*b+c==a*a*a+b*b*b+c*c*c)
                {
                    if(1==d)d=0;
                    else printf(" ");
                    n=100*a+10*b+c;
                    printf("%d",n);
                }
    return 0;
}