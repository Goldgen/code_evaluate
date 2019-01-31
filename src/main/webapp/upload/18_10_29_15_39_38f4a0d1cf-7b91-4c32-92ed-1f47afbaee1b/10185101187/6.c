#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    while(x!=y)
    {
        if(x>y)
            x = x - y;
        else
            y = y - x;
    }

    printf("最大公约数是: %d", x);
}
