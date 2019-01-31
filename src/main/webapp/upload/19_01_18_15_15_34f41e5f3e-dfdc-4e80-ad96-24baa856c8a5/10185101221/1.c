#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a , b , c ;
    for (a = 1;a <= 98;a++)
    {
        for ( b = 1;b <= 99 - a; b++)
        {
            c = 100 - b - a;
            if (c%3 == 0)
            {
                if (100 ==7*a + 5*b + c/3 )
                printf("%d %d %d",a,b,c);
            }
            else
                continue;
        }
    }
    return 0;
}