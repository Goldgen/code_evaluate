#include<stdio.h>
int main()
{
    int a,b,c,d,max;
    scanf("%d %d %d",&a,&b,&c);
    d = (a>b)?a:b;
    max = (d>c)?d:c;
    printf("%d",max);
    return 0;
}
