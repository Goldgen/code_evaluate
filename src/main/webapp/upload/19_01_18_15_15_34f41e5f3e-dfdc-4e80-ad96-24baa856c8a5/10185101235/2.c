#include <stdio.h>

int main (void)

{
    float i = 1;
    int max = 1;
    int s1 = 1;
    double e = 1;

    while(1)
    {
        for(i=1;i<=max;i++)
        {
            s1 *= i;
        }
        e += 1/(float)s1;
        if(s1>=1000000)
            break;
        s1 = 1;
        max++;
    }
    printf("%f",e);
}
