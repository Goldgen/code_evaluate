#include<stdio.h>
int a[10010],n; 
void quicksort(int left,int right)
{
	int i,j,k,t;
	if(left>right) return;
	i=left;j=right;k=a[left];
	while(i!=j)
	{
		while(a[j]>=k&&i<j) j--;
		while(a[i]<=k&&i<j) i++;
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	a[left]=a[i];
	a[i]=k;
	quicksort(left,i-1);
	quicksort(i+1,right);
}
int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  scanf("%d",&a[i]);
	quicksort(1,n);
	for(i=1;i<n;i++)
	printf("%d ",a[i]);
	printf("%d",a[n]);
	return 0;
}