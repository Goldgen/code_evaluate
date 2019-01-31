#include<stdio.h>

void fun(int n,int m)
{
	if(n > 0) 
	{	int a;
		scanf("%d",&a);
	    m++;
		fun(a,m);
		printf("%d",n);
		if(m > 2)
		printf(" ");
		
		
}

}
int main()
{	
	int a;
	scanf("%d",&a);
	fun(a,1);
	return 0;
}