#include <stdio.h>

int main()
{
    int x, y;
    for(x=0;; x++)
    {
        if(x%3==0 && x%10==6)
               {
                   y = x+1;
                   printf("%d", x);
                   break;
               }
    }

    for(; y<=100; y++)
    {
        if(y%3==0 && y%10==6)
               printf(" %d", y);
    }
}
