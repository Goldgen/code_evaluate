#include <stdio.h>
#include <stdbool.h>

#define Dig1 (n%10)
#define Dig2 (n%100 - Dig1)/10
#define Dig3 (n - n%100)/100

int main(void)

{
    int n = 100;
    bool SpaceController = 0;

    for(;n<=999;n++)
    {
        if (Dig1*Dig1*Dig1+Dig2*Dig2*Dig2+Dig3*Dig3*Dig3 == n)
        {
            if (SpaceController == 1)
                printf(" ");
            printf("%d",n);
            SpaceController = 1;
        }

    }
}
