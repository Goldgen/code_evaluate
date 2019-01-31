#include <stdio.h>
int main(){
	int a[10000]={0},i=0;
	for(;;i++){
		scanf("%d",&a[i]);
		if(a[i]<=0)
		{
		i--;
	    break;
	    }
	}
	for(;i>=0;i--){
		if(i==0)
		printf("%d",a[i]);
		else
		printf("%d ",a[i]);
	}
	return 0;
}