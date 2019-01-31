#include <stdio.h>
int fibonacci(int n){
	if(n==0)
		return 0;
    if(n>2)
        return fibonacci(n-2)+fibonacci(n-1);
    return 1;
}
int main()
{
    int a,m;
    scanf("%d",&a);
    m=fibonacci(a);
	printf("%d",m);
return 0;
}
