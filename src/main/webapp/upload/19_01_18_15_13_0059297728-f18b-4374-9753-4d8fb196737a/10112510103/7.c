#include <stdio.h>

int main()
{
    int a,b,c,d,the_biggest1,the_biggest2,the_biggest =0;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a >= b)
        the_biggest1 = a;
    else
        the_biggest1 = b;
    if(c >= d)
        the_biggest2 = c;
    else
        the_biggest2 = d;

    if(the_biggest1 >= the_biggest2)

        the_biggest = the_biggest1;
    else

        the_biggest = the_biggest2;

    printf("%d",the_biggest);

    return 0;
}