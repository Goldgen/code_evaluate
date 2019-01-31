#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=1;
    int a;
    int b=0;
    double c;
    for(;count<=5;++count)
    {
        scanf("%d",&a);
        b+=a;
    }
    c=b/5.0;
    printf("%.1lf",c);
    return 0;
}
