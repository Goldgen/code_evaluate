#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#define N 2000000
char A[N];
int seive()
{
    memset(A,1,sizeof(A));
    A[0]=A[1]=0;
    int i,j,sq=(int)sqrt(N);
    for (i=2;i<=N;i++)
        if (A[i])
        {
            for (j=2*i;j<=N;j+=i)
                A[j]=0;
        }
}
int main()
{
    int a,b,sum;
    seive();
    scanf("%d",&sum);
    printf("%d",sum);
    for (a=2;a<=sum/2;a++)
    {
        b=sum-a;
        if (A[a]&&A[b])
        {
            printf("=%d+%d",a,b);
        }
    }
    return 0;
}