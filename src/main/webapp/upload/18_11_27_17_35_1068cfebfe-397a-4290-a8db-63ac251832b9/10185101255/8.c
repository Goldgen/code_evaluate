#include<stdio.h>
int a[10010];
int main() 
{
	int i,n,max=-1,k=-1,cont=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(k!=a[i])
		{
			k=a[i];
			if(cont>max) max=cont;
			cont=1;
		}
		else cont++;
	}
	if(cont>max) max=cont;
	printf("%d",max);
}