#include<stdio.h>
int main()
{
int i,j;
int num=10;
int a[10];
for(i=0;i<num;i++)
{
a[i]=i;
for(j=0;j<=i;j++)
{

printf("%d ",a[j]);
if(j==i)
{
printf("\n");
}
}
}
getch();
} 