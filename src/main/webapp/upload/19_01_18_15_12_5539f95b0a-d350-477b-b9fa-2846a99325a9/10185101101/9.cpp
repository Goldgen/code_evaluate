#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a;

    scanf("%d",&a);
    if(a==0)
        printf("0");
    else if(a>0)
        printf("1");
    else if(a<0)
        printf("-1");

    return 0;
}
