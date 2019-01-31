#include<stdio.h>
int main()
{
    int n,m=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int v=1;v<=2*n+2*(i-1)+1;v++)
        {
            if(v<2*n-2*(i-1)-1)printf(" ");
            if(v>=2*n-2*(i-1)-1&&v<2*n)
            {
                if(v%2!=0)
                {
                    m++;
                    printf("%d",m);
                }
                else printf("+");
            }
            if(v>2*n)
            {
                if(v%2!=0)
                {
                    printf("%d",m);
                    m--;
                }
                else printf("+");
            }
            if(v==2*n)printf("=");
        }
        if(i!=n)printf("\n");
    }
    return 0;
}
