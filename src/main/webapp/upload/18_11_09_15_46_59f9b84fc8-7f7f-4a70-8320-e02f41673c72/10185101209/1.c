#include<stdio.h>

int main()
{
    int i;
    for(i = 1; i <= 100; i++)
        if(i % 3 == 0 && i % 10 == 6)
        {
            if(i != 6)
                printf(" ");
            printf("%d",i);
        }
    return 0;
}