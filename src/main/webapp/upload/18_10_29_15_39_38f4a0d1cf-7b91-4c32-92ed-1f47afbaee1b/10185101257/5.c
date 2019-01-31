#include<stdio.h>
int main()
{
    long sum1=0,sum2=0;
    for(int i=1;i<=100;++i)
    {
        if(i%2!=0)
            sum1+=i;
        else
            sum2+=i;
    }
    printf("%ld %ld",sum1,sum2);
    return 0;
}