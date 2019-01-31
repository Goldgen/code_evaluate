#include<stdio.h>
int main()
{
	int a[100],n,i,l=0,temp;
	scanf("%d",&n);
	for (;i<n;++i){
		scanf ("%d",&a[i]);
	}
	for (i=0;i<n;++i){
		temp=1;
		for (int v=i+1;v<n;v++){
			if (a[v]==a[i]){
				temp++;
			}
			else{
				break;
			}
		}
		l=(l<temp)?temp:l;
	}
	printf ("%d",l);
}