#include <stdio.h>

int main(){
	int t,n,m,j;
    scanf("%d",&t);
    int data[t];
    int i=0;
    for(;i<t;i++){
    	scanf("%d",&n);
		data[i]=n;
	}
	scanf("%d %d",&j,&m);
	
	for(int k=0;k<j;k++){
		printf("%d ",data[k]);
    }
    printf("%d",m);
	for(int k=j;k<t;k++){
		printf(" %d",data[k]);	
	}
    return 0;
}