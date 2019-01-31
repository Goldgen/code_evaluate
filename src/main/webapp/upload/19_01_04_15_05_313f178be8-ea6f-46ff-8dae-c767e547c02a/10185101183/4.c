#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[101];int n;char b[101];int i;int j=0;int c[101]={1};int m;int k=1;int p=0;
    gets(a);
    n=strlen(a);b[0]=a[0];
    for(i=1;i<n;++i)
    {
        if(a[i]==' ')
        {
            for(m=i;m<n-1;++m)
                a[m]=a[m+1];
        }
    }
    n=strlen(a);
    for(k=0;k<p;++k)
    {
      for(i=1;i<n;++i)
      {
         if(a[i]==b[k])
         {
            ++c[k];
            for(m=i;m<n-1;++m)
                 a[m]=a[m+1];
         }
      }
      p=strlen(a);

    }
    for(i=0;i<p;++i)
    {
        printf("%c %d;",b[i],c[i]);
    }
}
