#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    while(n<=66)
    {
        if(n%3==0&&n%10==6)
            {
                printf("%d ",n);
            }
        ++n;
    }
    printf("96");
    return 0;
}
