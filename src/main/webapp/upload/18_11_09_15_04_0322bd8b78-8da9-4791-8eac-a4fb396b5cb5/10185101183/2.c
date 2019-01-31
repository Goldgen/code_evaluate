#include <stdio.h>
int main(void)
{
    int i,j,k,m,p,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        a[i]=i+1;
    for(j=1;j<=n;j++)
    {
        for(k=0;k<2*n-2*j;k++)
            printf(" ");
        for(m=0;m<j;++m)
        {
            if(m==j-1)
                printf("%d",a[m]);
            else
                printf("%d+",a[m]);
        }
        printf("=");
         for(p=j-1;p>=0;--p)
        {
            if(p==0)
                printf("%d",a[p]);
            else
                printf("%d+",a[p]);
        }
        if(j<n)
        printf("\n");


    }


}
