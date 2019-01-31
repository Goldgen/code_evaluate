#include <stdio.h>
int main()
{int m,n;
scanf("%d %d",&m,&n);
int jz[m][n];
for(int i=0;i<m;i++)
{for(int j=0;j<n;j++)
scanf("%d",&jz[i][j]);}
for(int i=0;i<n;i++)
{for(int j=0;j<m;j++)
{printf("%d",jz[j][i]);
if(j!=m-1)
printf(" ");}
if(i!=n-1)
printf("\n");}
return 0;}
