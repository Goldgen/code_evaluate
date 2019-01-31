#include<stdio.h>
void rotate(int* p, int n, int m);
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[n];
	rotate(&arr[m],n,m);
	for(int i=0;i<n;i++)
	{if(i==n-1)
	
	printf("%d",arr[i]);
	else
	printf("%d ",arr[i]);
	
}
	
}
void rotate(int* p, int n, int m)
{
	for(int i=0;i<n-m;i++)
	{
		scanf("%d",&*p);
		p++;
	}
	p=p-n;
	for(int i=0;i<m;i++)
	{
		scanf("%d",&*p);
		p++;
	}
	

}