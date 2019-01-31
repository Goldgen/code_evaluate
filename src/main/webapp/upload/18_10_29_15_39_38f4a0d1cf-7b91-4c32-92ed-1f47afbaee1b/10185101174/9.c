#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n=0;
    int x=0;
    int y=0;
    int z=0;

    scanf("%d",&n);

    printf("1\n");

        for(int i=2; i<=n; i++)
        {
            printf("1");
            for(int j=2; j<=i-1; j++)
            {
                int sum1=1;
                int sum2=1;
                x=i-1;
                y=j-1;
                z=j-1;
                for( ; y>0; y--)
                    sum2*=y;
                for( ; z>0; z--)
                {
                    sum1*=x;
                    x--;
                }
                printf(" %d",sum1/sum2);
            }
            printf(" 1");
            if(i!=n)
            printf("\n");
        }
}