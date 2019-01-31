#include <stdio.h>
#include <stdlib.h>
int Func(unsigned int a, unsigned int b, unsigned int c);

int main()
{
    unsigned int x, y, z;
    scanf("%u+%u=%u",&x, &y, &z);

    if ((x+y)==z)
        printf("0");
    else if (z%10==(y%10)){
        //left
        printf("%d", Func(x, y, z));
    }
    else {
        //right
        printf("-%d",Func(y, x, z));
    }

    return 0;
}

int Func(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int m = a, i;
    for (i=0; (m+b)!=c; i++){
        m*=10;
    }

    return i;
}
