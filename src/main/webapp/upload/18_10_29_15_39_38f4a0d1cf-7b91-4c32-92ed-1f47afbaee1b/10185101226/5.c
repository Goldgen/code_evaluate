#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int sum1=0;
    int sum2=0;
    for(a=1;a<=100;++a)
    {
        if(a%2==0)
            sum1+=a;
        else
            sum2+=a;
    }
    printf("%d %d",sum2,sum1);
    return 0;
}
