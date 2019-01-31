#include<stdio.h>
int main()
{
    int n,b,c;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    scanf("%d %d",&b,&c);
    int x=0;
     for(;x<n-1;++x)
     {
         if(x==b)
            printf("%d ",c);
         printf("%d ",a[x]);
     }
     if(b==n-1)
        printf("%d ",c);
     printf("%d",a[x]);
     if(b==n)
        printf(" %d",c);
     return 0;
}