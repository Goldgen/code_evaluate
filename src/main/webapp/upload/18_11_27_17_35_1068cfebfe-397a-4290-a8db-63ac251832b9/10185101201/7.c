#include<stdio.h>
main()
{
   int a[100],b[100],m,n,j,t=0;
   scanf("%d",&m);
   m=m-1;
   scanf("%d",&a[0]);
   for(n=1;n<=m;n++)
        scanf(" %d",&a[n]);
    scanf("%d",&j);
    for(n=0;n<=m;n++)
    {
        if(a[n]==j)
        {
            b[t]=n;
            t++;
        }
    }
    if(t==0)
        {
            printf("ERROR");
            return 0;
        }
    for(j=0;j<=t-1;j++)
    {
        printf("%d",b[j]);
        if(j<t-1)
            printf(" ");
    }
}