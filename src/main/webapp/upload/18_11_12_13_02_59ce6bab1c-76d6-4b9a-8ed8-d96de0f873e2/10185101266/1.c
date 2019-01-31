#include<stdio.h>
int mul(n)
{
   int i,j;
   for(i=1;i<=n;i++)
   {
        for(j=1;j<=i;j++)
           printf(" %d * %d = %2d", j, i, i*j);
        printf("\n");
   }
}
int main()
{
  int n;
  scanf("%d",&n);
  mul(n);
  return 0;
}
