#include <stdio.h>

int main()
{
    int x, a=3, b, i, j;
    scanf("%d", &x);
    printf("%d", x);

    for(; a<=(x+1)/2; a+=2)
    {
        for(i=2; a%i!=0; i++)
           0 ;
        if(i==a)
        {
            b = x - a;
            for(j=2; b%j!=0; j++)
               0 ;
            if(j==b)
                printf("=%d+%d", a, b);
        }
    }
}
