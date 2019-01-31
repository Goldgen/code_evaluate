#include <stdio.h>
int main(void)
{
    int n,i,j,m;
    int a;
    scanf("%d",&n);
    m=(n+1)/2;
    for(i=1,a=0;i<m;i++,a++)
    {
        for(j=1;j<=n;j++)
          {
            if(j==m-a&&a==0)
              {printf("*\n");break;}
            else if(j==m-a&&a!=0)
                printf("*");
            else if(j==m+a)
            {printf("*\n");break;}
            else printf(" ");
          }

    }
    for(j=1;j<=n;j++)
        printf("*");
    return 0;
}