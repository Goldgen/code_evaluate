#include <stdio.h>
int main(void)
{
    int i;
    for(i=100;i<1000;++i)
    {
        if(i==(i/100)*(i/100)*(i/100)+(i/10%10)*(i/10%10)*(i/10%10)+(i%10)*(i%10)*(i%10))
        {
            if(i!=407)
                printf("%d ",i);
            else if(i==407)
                printf("%d",i);
            else
                continue;
        }
    }
    return 0;
}
