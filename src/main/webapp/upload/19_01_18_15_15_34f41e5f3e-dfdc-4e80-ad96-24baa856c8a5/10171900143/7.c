#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned a;
    scanf("%u",&a);
    int count=0;
    while(a>0)
        {
            if(a%2==1)count++;
            a>>=1;
        }
        printf("%d",count);
    return 0;
}
