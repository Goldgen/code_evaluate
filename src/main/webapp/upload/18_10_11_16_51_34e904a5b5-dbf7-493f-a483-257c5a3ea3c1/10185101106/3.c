#include <stdio.h>

int main()
{
    int num,a,b;
    scanf("%d",&num);
    a=(int)num/10;
    b=num-10*a;
    printf("%d ",b);
    printf("%d",a);
    return 0;

}