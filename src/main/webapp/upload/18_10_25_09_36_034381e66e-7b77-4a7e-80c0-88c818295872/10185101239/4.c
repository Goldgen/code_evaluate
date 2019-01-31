#include <stdio.h>
int main()
{
int n,m,i,j,y,x;
scanf("%d",&n);
if (n>=4&&n<=10)
{m=n-2;
for(i=1; i<=n; i++)
printf("*");
for(j=1; j<=m; j++)
{printf("\n*");
for(x=1; x<=m; x++)
printf(" ");
printf("*");}
printf("\n");
for(y=1; y<=n; y++)
printf("*");}
return 0;
}

