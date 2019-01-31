#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0;i<101;++i)
        if((i%10==6)&&(i%3==0))
        {if(i==96)
            printf("%d",i);
         else
            printf("%d ",i);}
    return 0;
}
