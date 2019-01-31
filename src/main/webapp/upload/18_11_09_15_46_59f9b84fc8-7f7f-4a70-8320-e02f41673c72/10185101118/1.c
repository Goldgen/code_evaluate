#include<stdio.h>
int main()
{
    int i=6,t=0;
    for(;i<=100;i++)
    {
        if(i%10==6&&i%3==0)
        {
            if(0==t)
            {
                printf("%d",i);
                t=1;
            }
            else printf(" %d",i);
        }
    }
    return 0;
}