#include<stdio.h>
#include<math.h>
int main (void)
{
    int i,sum1=0,sum2=0;
    for(i=1;i<=100;i++)
    {
        if(i%2!=0)
            sum1+=i;
        if(i%2==0)
            sum2+=i;
    }
    printf("%d %d",sum1,sum2);
    return 0;
}