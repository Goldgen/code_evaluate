#include <stdio.h>

int main()
{
    int n=1, x=0, y=0;

    for(; n<=100; n++)
    {
        if(n%2==0)
            x = x + n;
        else
            y = y + n;
    }

    printf("%d %d", y, x);
}
