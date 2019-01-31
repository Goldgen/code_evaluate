#include <stdio.h>
int GDB(int a,int b){
	if(b==0)
	return a; 
	return GDB(b,a%b);
}
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",GDB(n,m));
	return 0;
}