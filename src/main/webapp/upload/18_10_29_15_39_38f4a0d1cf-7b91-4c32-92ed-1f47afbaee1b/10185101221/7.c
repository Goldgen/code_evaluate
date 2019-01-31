#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int num = 0;
    scanf("%u",&num);
    int i=0;
    while(num >= 1)
    {
        if (num % 2 == 1)
            i ++;
        num /= 2;
    }
    printf("%d",i);
    return 0;
}
