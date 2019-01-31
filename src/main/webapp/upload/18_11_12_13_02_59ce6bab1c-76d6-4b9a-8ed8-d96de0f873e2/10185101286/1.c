#include <stdio.h>
int shu(int a,int b);
int main()
{
    int j,k,n;
    scanf("%d",&n);
    if(n==1)
    {
        printf(" 1 * 1 =  1");
    }
    else
    {
        printf(" 1 * 1 =  1");
        for(j=2;j<=n;++j)
        {
            printf("\n 1 * %d =  %d",j,j);
            for(k=2;k<=j;++k)
            {
                printf(" %d * %d =",k,j);
                if(shu(k,j)<10)
                {
                    printf("  ");
                }
				else
				{
					printf(" ");
				}
                printf("%d",shu(k,j));
            }
        }
    }
    return 0;
}
int shu(int a,int b)
{
    int m;
    m=a*b;
    return m;
}
