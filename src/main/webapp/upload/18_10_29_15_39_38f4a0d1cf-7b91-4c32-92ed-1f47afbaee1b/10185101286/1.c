#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=100;++i)
    {
        for(j=1;j<=100-i;++j)
        {
            k=100-i-j;
            if(21*i+15*j+k==300)
            {
                printf("%d %d %d",i,j,k);
                return 0;
            }
        }
    }
    return 0;
}
