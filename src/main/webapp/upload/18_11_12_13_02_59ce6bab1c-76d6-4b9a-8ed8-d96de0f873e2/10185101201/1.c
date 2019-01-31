#include<stdio.h>
int g(int x,int y)
{
    printf(" %d * %d = %2d",x,y,x*y);
}
int main()
{
    int n,i=1,j,t=1,p;
    scanf("%d",&n);
    for(i=1,p=n-1;i<=n;i++,t++)
        {
            for(j=1;j<=t;j++)
            {
                g(j,i);
                
            }
            if(i<=p)
            printf("\n");
        }
}