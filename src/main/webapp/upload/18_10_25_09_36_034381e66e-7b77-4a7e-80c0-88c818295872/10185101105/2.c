#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,n=0;
    float m;
    do
    {
        scanf("%d",&a);
        n=n+a;
        i++;
    }while(i<=4);
    m=(float)n/5;
    printf("%.1f",m);
    return 0;
}
