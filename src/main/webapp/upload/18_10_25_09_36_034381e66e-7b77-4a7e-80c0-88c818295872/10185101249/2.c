#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b;
    double a,s;
    s=0.0f;
    for(b=1;b<=5;b++)
    {
        scanf("%lf",&a);
        s+=a;
    }
    printf("%.1f",s/5);
    return 0;
}
