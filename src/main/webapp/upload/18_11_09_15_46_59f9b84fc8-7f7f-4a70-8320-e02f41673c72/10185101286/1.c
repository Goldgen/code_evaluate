#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("6");
    for(i=7;i<=100;++i)
    {
        if(i%3==0&&i%10==6)
            printf(" %d",i);
    }
    return 0;
}
