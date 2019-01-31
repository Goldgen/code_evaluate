#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    printf("6");
    for(i=7;i<=100;i++)
    {
        if(i%3==0&&i%10==6)
            printf(" %d",i);
    }
}