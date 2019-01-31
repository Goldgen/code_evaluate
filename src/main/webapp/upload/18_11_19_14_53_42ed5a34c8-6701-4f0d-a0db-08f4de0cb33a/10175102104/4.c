#include <stdio.h>

int main()
{
     int n,a[100],i=0,j;
     scanf("%d",&n);
     while(n)
     {
       a[i++]=n%2;
        n/=2;
     }
     for(j=i-1;j>=0;j--)
      printf("%d",a[j]);
     return 0;
}