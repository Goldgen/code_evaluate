#include<stdio.h>
main()
{
   int a[100],b[100],m,n,j,k,t;
   scanf("%d",&m);
   m=m-1;
   scanf("%d",&a[0]);
   for(n=1;n<=m;n++)
        scanf(" %d",&a[n]);
    scanf("%d %d",&j,&k);
    b[j]=k;
    for(t=0;t<=m;t++)
    {
        if(t<j)
        b[t]=a[t];
        else
            b[t+1]=a[t];
    }

    for(t=0;t<=m+1;t++)
    {
        printf("%d",b[t]);
        if(t<m+1)
        printf(" ");
    }

}