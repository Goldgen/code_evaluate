#include <stdio.h>

int mul(int,int);

int main(void)
{
    int a = 1;
    int b = 1;
    int n = 0;
    scanf("%d",&n);

    for (b=1;b<=n;b++)
    {
        for(a=1;a<=b;a++)
        {
            printf(" %d * %d =%3d",a,b,mul(a,b));
        }
        printf("\n");
    }
    return 0;
}

int mul(int x,int y)
{
    return x*y;
}
