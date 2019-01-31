#include <stdio.h>


int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    a=(a>b)?a:b;
    a=(a>c)?a:c;
    a=(a>d)?a:d;
    printf("%d",a);

}