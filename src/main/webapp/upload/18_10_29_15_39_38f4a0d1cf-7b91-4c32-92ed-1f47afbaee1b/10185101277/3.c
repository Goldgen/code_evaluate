#include<stdio.h>
int a[1001];
int main()
{
    int i,j,n;
    for( i = 0; i < 1001;++i)
    a[i] = 1;
    for( i = 2;i<1001;++i)
    if(a[i]==1)
    {
         for(j = 2; i*j<1001;++j)
         a[i*j]=0;
    }
    scanf("%d",&n);
    printf("%d",n);
    for(i = 2; i < n;i++)
       {
          if(a[i]==1&&a[n-i]==1&&i<=n-i)
          {
              printf("=%d+%d",i,n-i);
          }
       }
    return 0;
}
