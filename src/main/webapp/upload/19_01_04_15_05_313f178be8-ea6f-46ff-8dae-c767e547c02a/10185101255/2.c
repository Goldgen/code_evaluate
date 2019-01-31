#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int n = 0;
    int s = 1;
    int i = 1;
    int j = 1;

    scanf("%d+%d=%d", &a, &b, &c);

    for (i = 1; i < 10; i++)
    {
        s = 1;
        for (j = 1; j <= i; j++)
            s *= 10;
         if(a * s + b == c)
         {
            n = i;
            break;
         }
         if(b * s + a == c) n = -i;
    }

    printf("%d", n);
    return 0;
}
