#include <stdio.h>

int main()
{
    int n,i,m,o=0;
    scanf("%d",&n);
    int a[n];
    int b[n+1];

    for(i=0;i<n;i++)
        {scanf("%d",&a[i]);
        b[i]=a[i];}
    scanf("%d %d",&m,&o);
    b[m]=o;
    for(i=m+1;i<n+1;i++)
        b[i]=a[i-1];
    for(i=0;i<n+1;i++)
    {printf("%d",b[i]);
        if(i!=n)
        printf(" ");}
  return 0;
}
