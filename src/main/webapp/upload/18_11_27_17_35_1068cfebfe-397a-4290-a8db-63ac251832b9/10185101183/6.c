#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
    scanf("%d",&a[i]);
    int p,q;
    scanf("%d",&p);
    for(int j=0;j<n;++j)
    {
        if(a[j]==p)
        {
            q=j;
            break;
        }
        if(j==n-1)
        {
          printf("ERROR");
          return 0;
        }
    }
    for(int i=q;i<n-1;++i)
        a[i]=a[i+1];
    for(int j=0;j<n-2;++j)       
       printf("%d ",a[j]);
    printf("%d",a[n-2]);

}