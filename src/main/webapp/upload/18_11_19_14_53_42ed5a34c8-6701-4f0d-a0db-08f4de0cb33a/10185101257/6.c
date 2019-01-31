#include<stdio.h>
int fib(int n){
	int fn;
	if(n==0)
        fn=0;
	else if(n==1)
        fn=1;
	else
        fn=fib(n-1)+fib(n-2);
	return fn;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
