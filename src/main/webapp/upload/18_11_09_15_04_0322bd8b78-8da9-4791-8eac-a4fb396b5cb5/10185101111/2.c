#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,m,x,y,a,b;
	for(i=1;i<n;i++){
		for(m=1;m<=(n*2-i*2);m++)
		printf(" ");
		for(x=1;x<=i;x++){
			if(x==i)
			printf("%d=",x);
			else
			printf("%d+",x);
		}
		for(y=i;y>0;y--){
			if(y==1)
			printf("1");
			else
			printf("%d+",y);
		}
		printf("\n");
	}
	for(a=1;a<=i;a++){
			if(a==i)
			printf("%d=",a);
			else
			printf("%d+",a);
		}
		for(b=i;b>0;b--){
			if(b==1)
			printf("1");
			else
			printf("%d+",b);
		}
}