#include <stdio.h>

int main()
{
    int a,b,c,the_middle = 0;

    scanf("%d %d %d",&a,&b,&c);

    if((a-b)*(a-c) < 0)
        the_middle = a;
    else if((b-c)*(b-a) < 0)
        the_middle = b;
    else if(a == b)
        the_middle = a;
    else
        the_middle = c;

    printf("%d",the_middle);

    return 0;
}