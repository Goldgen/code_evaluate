#include<stdio.h>
int main()
{
int i,j,n,m;
scanf("%d",&m);
n=(m+1)/2;
for(i=1;i<n;i++) {
for(j=1;j<=i-1+n;j++)
if(j==n-i+1||j==n+i-1)
printf("*");
else printf(" ");
printf("\n");}
for(j=1;j<=2*n-1;j++)
printf("*");
}