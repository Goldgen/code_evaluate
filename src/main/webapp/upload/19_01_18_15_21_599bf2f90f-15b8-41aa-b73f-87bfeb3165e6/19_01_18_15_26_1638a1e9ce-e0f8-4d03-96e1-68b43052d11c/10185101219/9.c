#include<stdio.h>
int main()
{
int x;
int y;
scanf("%d",&x);
if(x>0)
y=1;
if(x==0)
y=0;
if(x<0)
y=-1;
printf("%d",y);
} 