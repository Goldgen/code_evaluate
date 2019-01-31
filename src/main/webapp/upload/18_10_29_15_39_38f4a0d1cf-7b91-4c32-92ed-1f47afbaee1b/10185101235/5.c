#include <stdio.h>

int main(void)

{
    int odd = 1;
    int SumOdd = 0;
    int SumEven = 0;
    int even = 2;
    int max = 100;

    for(;odd<=max,even<=max;odd+=2,even+=2)
    {
        SumOdd +=odd;
        SumEven += even;
    }
    printf("%d %d",SumOdd,SumEven);
}
