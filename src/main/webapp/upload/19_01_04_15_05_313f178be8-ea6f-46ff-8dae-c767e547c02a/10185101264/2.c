#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int a, b, c, flag = 0, i;
    scanf("%d+%d=%d", &a, &b, &c);
    if(a == 0)
    {
        for(i = 0, flag = b; flag != c; i++)
            flag *= 10;
        printf("-%d", i);
        return 0;
    }
    for(i = 0, flag = a; flag + b < c; i++)
        flag *= 10;

    if(flag + b > c)
    {
        for(i = 0, flag = b; flag + a < c; i++)
            flag *= 10;
        i = -i;
    }
    printf("%d", i);
}