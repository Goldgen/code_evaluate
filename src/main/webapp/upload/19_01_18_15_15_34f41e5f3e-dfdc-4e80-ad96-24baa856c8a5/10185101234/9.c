#include <stdio.h>
#define size 16
void main()
{
int n=0,i=0,j=0;
int sanjiao[size]={1},linshi[size]={1};
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
if((j-1<0)||(j+1>i))sanjiao[j]=1;
else sanjiao[j]=linshi[j-1]+linshi[j];
printf("%d ",sanjiao[j]);
}
for(j=0;j<=i;j++)linshi[j]=sanjiao[j];
printf("\n");
}
}