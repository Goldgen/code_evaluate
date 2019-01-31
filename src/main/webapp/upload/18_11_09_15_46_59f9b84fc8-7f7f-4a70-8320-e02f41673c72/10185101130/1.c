#include<stdio.h>

int main(void)
{
    int j = 0;
    for(int i = 1;i <= 100;i++)
    {
        if(i % 3 == 0&&i % 10 == 6)
        {
            j+=1;
            if(j == 1)
                printf("%d",i);
            else
                printf(" %d",i);
        }
    }
    return 0;
}
