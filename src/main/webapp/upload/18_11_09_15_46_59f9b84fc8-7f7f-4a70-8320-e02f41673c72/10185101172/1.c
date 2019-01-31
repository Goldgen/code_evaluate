#include<stdio.h>

int main ()
{
    int i=0;
    printf("6");
    for(i=16;i<=100;i+=10)
    {
        if(i%3==0)
            printf(" %d",i);
    }

    return 0;}
