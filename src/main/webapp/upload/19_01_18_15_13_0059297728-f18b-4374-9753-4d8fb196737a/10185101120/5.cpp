#include<stdio.h>
int main()
{
    int a,sum=0,n=8,b,c,d,e,f,g,h,i,x;
    while (n--)
    {
	    scanf ("%d",&a);
	    sum+=a;
	}
	scanf("%d,%d,%d %d,%d,%d %d,%d",&b,&c,&d,&e,&f,&g,&h,&i);
	x=b+c+d+e+f+g+h+i;
	printf ("%d\n%d",sum,x);
	return 0;
}