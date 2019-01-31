#include<stdio.h>
int main()
{
    int n=1;
    for(;n<95;++n)
    {
        if((n%3==0)&&(n%10==6))
            printf("%d ",n);
    }
    printf("96");
    return 0;
}