#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    if((a-b)*(a-c)<=0)
        printf("%d",a);
    else if((b-a)*(b-c)<=0)
        printf("%d",b);
    else
        printf("%d",c);
    return 0;
}