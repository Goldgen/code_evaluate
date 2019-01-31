#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=0,sum=0,sum1=0;
    int num[8],num2[8];
    scanf("%d %d %d",&num[0],&num[1],&num[2]);
    scanf("%d %d %d",&num[3],&num[4],&num[5]);
    scanf("%d %d",&num[6],&num[7]);
    for(i=0;i<8;i++){
        sum=sum+num[i];
    }
    printf("%d\n",sum);
    scanf("%d,%d,%d",&num2[0],&num2[1],&num2[2]);
    scanf("%d,%d,%d",&num2[3],&num2[4],&num2[5]);
    scanf("%d,%d",&num2[6],&num2[7]);
    for(i=0;i<8;i++){
        sum1=sum1+num2[i];
    }
    printf("%d",sum1);
    return 0;
}


