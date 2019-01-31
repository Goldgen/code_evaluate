#include<stdio.h>
int main()
{
	int a[100]={0},n,i,temp,v;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
	for (i=0;i<n;++i){
		for (v=i+1;v<n;v++){
			if (a[i]>a[v]){
				temp=a[i];
				a[i]=a[v];
				a[v]=temp;
			}
		}
	}
	printf ("%d",a[0]);
	for (i=1;i<n;++i){
		printf (" %d",a[i]);
	}
}