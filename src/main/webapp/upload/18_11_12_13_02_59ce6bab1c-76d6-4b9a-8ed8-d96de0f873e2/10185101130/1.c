#include<stdio.h>

void run(int n);

int main(void)
{
    int n;
    scanf("%d",&n);
    run(n);
    return 0;
}

void run(int n)
{
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            printf(" %d * %d = %2d",j,i,j*i);
            if(j == i)
                printf("\n");
        }
    }
}
