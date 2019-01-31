#include<stdio.h>
int main()
{
	int n,i,a[10]={0};
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
	int x,y;
	scanf ("%d %d",&x,&y);
	for (i=n;i>x;i--){
		a[i]=a[i-1];
	}
	a[x]=y;
	for (i=0;i<n+1;i++){
		if (i==0)
		printf ("%d",a[i]);
		else
		printf (" %d",a[i]);
	}
}