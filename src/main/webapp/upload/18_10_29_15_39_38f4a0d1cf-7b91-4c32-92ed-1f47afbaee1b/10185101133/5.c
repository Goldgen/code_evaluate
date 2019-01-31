#include <stdio.h>
#include <stdlib.h>


int main()
{
    int odd=1;
    int even=2;
    int sum_1=0,sum_2=0;
    while(odd<=100)
    {
        sum_1+=odd;
        odd+=2;
    }
    while(even<=100)
    {
        sum_2+=even;
        even+=2;
    }
    printf("%d %d",sum_1,sum_2);
    return 0;
}
