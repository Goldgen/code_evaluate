#include <stdio.h>
#include <stdlib.h>

int main()
{
for(int i=1;i<=100;i++)
{
    if((i%3==0)&&(i%10==6))
    {
        printf("%d",i);
        if(i<96)
        {
            printf(" ");
        }
    }
}

    return 0;
}
