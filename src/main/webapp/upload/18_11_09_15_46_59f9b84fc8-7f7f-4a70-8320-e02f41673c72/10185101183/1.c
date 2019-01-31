#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0;i<=100;++i)
    if(i%3==0)
    {
        if(i==6||i%10==6)
        {
            if(i!=96)
            printf("%d ",i);
            else
                printf("%d",i);
        }
    }
}
