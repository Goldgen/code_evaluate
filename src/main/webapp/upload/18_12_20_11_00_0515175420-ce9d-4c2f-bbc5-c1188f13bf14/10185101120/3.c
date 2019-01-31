#include<stdio.h>
int main()
{
	int n,a[105]={0},sum=0,min;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	min=a[0];
	for(int i=1;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	printf("%d %d",min,sum);
}