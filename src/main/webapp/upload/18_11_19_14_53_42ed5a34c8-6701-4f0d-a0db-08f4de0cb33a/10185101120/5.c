#include<stdio.h>
int GDB(int x,int y);
int main()
{
	int a,b,c;
	scanf ("%d %d",&a,&b);
	c=GDB(a,b);
	printf ("%d",c);
}
int GDB(int x,int y)
{
	if (y==0)
	return x;
    GDB(y,x%y);
}