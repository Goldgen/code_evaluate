#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;


    printf("6");
    for(num=7;num<=100;++num)
    {
        if(num%3==0&&num%10==6)
            printf(" %d",num);

    }

    return 0;
}