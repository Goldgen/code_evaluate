#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int a,b,c,e,n;
    char jia;
    char deng;
    scanf("%d",&a);
    scanf("%c",&jia);
    scanf("%d",&b);
    scanf("%c",&deng);
    scanf("%d",&c);
    int i=0;

    if((c-a)%b==0)//19+2
    {
        e=c-a;
        n=e/b;
        n/=10;
        if(n%10==0)
        {
            ++i;
            n/=10;
        }
        printf("-%d",i+1);
    }
    else//12+13
    {
        e=c-b;
        n=e/a;
        n/=10;
        if(n%10==0)
        {
            ++i;
            n/=10;
        }
        printf("%d",i+1);
    }
    return 0;
}