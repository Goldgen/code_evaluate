#include<stdio.h>
#include<limits.h>
int Min(int *p, int n)
{

	int min = INT_MAX,i;
	for(i=0;i<n;i++,p++)
	{
		if(*p < min)
		min = *p;
	}
     printf("%d ",min);
}
int Sum(int *p ,int n)
{
	int i,s= 0;
	for(i=0;i<n;i++,p++)
	{
		s+= *p;
	}
	printf("%d",s);
}

int main()
{
	int n,i,*ptr=NULL;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=a;
	Min(ptr,n);
	Sum(ptr,n);
}