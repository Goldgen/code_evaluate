#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j=1;
    int sum1=0;
    int o=0;
    int sum2=0;
    for( ;j<100;j+=2)
    {
        sum1+=j;
    }
    for( ;o<=100;o+=2)
    {
        sum2+=o;
    }
    printf("%d %d",sum1,sum2);
    return 0;


}