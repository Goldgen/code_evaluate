#include<stdio.h>
int g(int x,int y)
{
    printf("%2d *%2d =%3d",x,y,x*y);
}
int main()
{
int i,j,c;
scanf("%d",&c);
for(i=1;i<c;i++)
{
for(j=1;j<=i;j++)
{
g(j,i);
}
printf("\n");
}
for(j=1;j<=c;j++)
{
g(j,c);
}
return 0;
}
