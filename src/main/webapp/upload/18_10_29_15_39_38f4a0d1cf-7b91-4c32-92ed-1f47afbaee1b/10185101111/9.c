#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[11];
	int b[11];
	int i,m,c;
	for(i=1;i<=n;i++){
		for(c=1;c<=i;c++){
			if(c==i){
				a[c]=1;
				printf("%d",a[c]);
				continue;
			}
			else if(c==1){
				a[c]=1;
				printf("%d ",a[c]);
				continue;
			}
			a[c]=b[c-1]+b[c];
			printf("%d ",a[c]);
		}
		for(m=1;m<=i;m++)
		b[m]=a[m];
		if(i!=n)
		printf("\n");
	}
}