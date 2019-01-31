#include<stdio.h>
int main()
{
	int a[100],n,i=0,x,v=0;
	scanf ("%d",&n);
	for (;i<n;++i){
		scanf ("%d",&a[i]);
	}
	scanf ("%d",&x);
	for (i=0;i<n;i++){
		if (a[i]==x){
			v=1;break;
		}
	}
	if(v==0){
		printf ("ERROR");
	}
	for (i=0;i<n;i++){
		if (a[i]==x){
			if (v==1){
				printf ("%d",i);
				v=0;
			}
			else{
				printf (" %d",i);
			}
		}
	}
}