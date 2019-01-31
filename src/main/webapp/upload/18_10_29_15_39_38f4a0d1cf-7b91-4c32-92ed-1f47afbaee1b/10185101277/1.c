#include <stdio.h>
int main(void)
{
    int a=7,b=5,c=1;
    int m=100,n=100;
    int i,j,k;
    for(i=1;i<15;i++)
    {
        for(j=1;j<20;j++)
        {
            for(k=0;k<300;k+=3)
            {
                if(a*i+b*j+c*k/3==m&&i+j+k==n)
                    printf("%d %d %d",i,j,k);
            }

        }
    }
    return 0;
}