#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j;
    int sum1=0,sum2=0;
    for(i=1;i<=100;i+=2){
        sum1+=i;
    }
    for(j=2;j<=100;j+=2){
        sum2+=j;
    }
    printf("%d %d",sum1,sum2);
    return 0;
}
