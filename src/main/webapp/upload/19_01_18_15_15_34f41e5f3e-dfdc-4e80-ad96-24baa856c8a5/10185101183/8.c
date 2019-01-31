#include <stdio.h>
int main(void)
{
    int n,i,m,k=0,p=0;
    scanf("%d",&n);
    printf("%d",n);
    for(i=2;i<=n/2;i++)
    {
        k=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                k++;
        }
        if(k==0)
        {
            m=n-i;
            p=0;
            for(int j=2;j<m;j++)
            {
                if(m%j==0)
                 p++;
            }
            if(p==0)
                printf("=%d+%d",i,m);
        }
    }
}