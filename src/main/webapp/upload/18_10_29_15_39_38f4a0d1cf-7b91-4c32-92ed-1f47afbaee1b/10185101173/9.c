#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    int a[n+5],b[n+5],p[n+5];
    scanf("%d",&n);
    if(n==1)
     printf("1");
    else if(n==2)
     printf("1\n1 1");
    else
     {printf("1\n1 1\n");
      a[0]=1;a[1]=1;b[0]=1;
       for(int i=0;i<n-2;++i)
        {printf("1 ");
         for(int j=0;j<i+1;++j)
            {p[j]=a[j]+a[j+1];
            printf("%d ",p[j]);
            b[j+1]=p[j];}
         for(int k=0;k<i+2;++k)
            {a[k]=b[k];}
         a[i+2]=1;
         if(i==n-3)
            printf("1");
         else
            printf("1\n");
         }}
    return 0;
}

