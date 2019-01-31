#include<stdio.h> 

void trans(int n){
	if(n/2 != 0){
		trans(n/2);
		printf("%d",n%2);
	}else{
		printf("%d",n);
		return;
	}
}

int main(){
	int x;
	scanf("%d",&x);
	trans(x);

	return 0;
}
