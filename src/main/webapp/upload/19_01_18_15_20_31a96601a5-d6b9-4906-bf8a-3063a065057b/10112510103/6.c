#include <stdio.h>

int main()
{
    int a,b,c,the_biggest =0;

    scanf("%d %d %d",&a,&b,&c);

    if(a >= b)
    {
        if(a >= c)
            the_biggest = a;
        else
            the_biggest = c;
    }
    else if(b >= c)
        the_biggest = b;
    else
        the_biggest = c;

    printf("%d",the_biggest);

    return 0;
}