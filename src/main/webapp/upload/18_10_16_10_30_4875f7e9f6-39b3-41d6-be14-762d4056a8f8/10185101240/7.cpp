#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,A,B;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if( a>b)
        A=a;
    else
        A=b;
    if (c>d)
        B=c;
    else
        B=d;
    if (A>B)
        printf("%d",A);
    else
        printf("%d",B);


    return 0;
}