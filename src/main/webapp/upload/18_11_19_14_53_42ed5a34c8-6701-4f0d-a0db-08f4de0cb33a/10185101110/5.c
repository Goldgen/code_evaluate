#include<stdio.h>

int gdb(int a,int b){
	if(a<b)
		return gdb(b,a);
	else{
		if(a%b==0){
			return b;
		}else{
			return gdb(b,a%b);
		}
	}
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",gdb(a,b));
	return 0;
}
