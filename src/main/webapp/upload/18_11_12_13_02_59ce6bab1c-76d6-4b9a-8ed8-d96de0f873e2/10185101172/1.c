#include <stdio.h>
#include <math.h>

int mul(int n)
{
    int i,j=0;
    printf(" 1 * 1 =  1");
    for(i=2;i<=n;i++)
    {
         printf("\n");
        printf(" 1 * %d =  %d",i,i);
        for(j=2;j<=i;j++)
            printf(" %d * %d = %s%d",j,i,i*j>=10?"":" ",i*j);
    }
}

int main()
{int n;
scanf("%d",&n);
mul(n);
 return 0;
   }
