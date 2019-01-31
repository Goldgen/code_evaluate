#include<stdio.h>
int main()
{
int a,b,c,d;
	printf("153");
for( b=2;b<=9;b++)
for( c=0;c<=9;c++)
for( d=0;d<=9;d++)
{
a=100*b+10*c+1*d;
if(a==b*b*b+c*c*c+d*d*d)
printf(" %d",a);}
return 0;}