#include <stdio.h>

int main()
{
    int sum1=0,sum2=0;
    for (int i=1;i<100;i++,i++)
    {
        sum1=sum1+i;
    }
    for (int j=2;j<=100;j++,j++)
    {
        sum2=sum2+j;
    }
    printf("%d %d",sum1,sum2);
}

