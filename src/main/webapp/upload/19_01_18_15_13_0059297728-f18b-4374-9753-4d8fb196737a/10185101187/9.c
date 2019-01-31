#include <stdio.h>

int main()
{
    long double x = 0L;

    scanf("%d", &x);

    if(x > 0L)
        printf("1");
    else if(x == 0L)
        printf("0");
    else if(x < 0L )
        printf("-1");
}
