#include <stdio.h>
int main()
{
   int n=0,m=0,i=1,j=1,p=1,q=1,a=0;
   scanf("%d",&n);
   m=(n-1)*2;
   for(q=1;q<=m;q++)
     printf(" ");
   printf("1=1");
   for(i=2;i<=n;i++)
   {m=m-2;
   printf("\n");
    for(j=1;j<=m;j++)
      printf(" ");
    printf("1");
    for(p=2;p<=i;p++)
        printf("+%d",p);
    printf("=%d",p-1);
    for(a=p-2;a>=1;a--)
    printf("+%d",a);
   }
}