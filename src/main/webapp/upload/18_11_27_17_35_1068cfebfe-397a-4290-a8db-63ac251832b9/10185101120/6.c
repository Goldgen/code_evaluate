#include<stdio.h>
int main()
{
	int a[100],n,i,v=0,x,q=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
	scanf ("%d",&x);
	for (i=0;i<n;i++){
		if (a[i]==x){
			v=1;
		}
	}
	if (v==0){
		printf ("ERROR");
	}
	else {
		for (i=0;i<n;i++){
			if(a[i]==x&&q==0){
				q=1;
			}
			else{
				if (v==1){
					printf ("%d",a[i]);
					v=0;
				}
				else{
					printf (" %d",a[i]);
				}
			}
		}
	}
}