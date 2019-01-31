#include<stdio.h>
main()
{
   int a[100],m,n,j=1,t=1;
   scanf("%d",&m);
   m=m-1;
   scanf("%d",&a[0]);
   for(n=1;n<=m;n++)
        scanf(" %d",&a[n]);
    for(n=1;n<=m;n++)
    {
        if(a[n]==a[n-1])
        {
            t++;
            if(t>j)
                j=t;
        }
        else
            t=1;
    }
    printf("%d",j);
}