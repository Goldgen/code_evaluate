#include <stdio.h>
double m=0;
int sum(int s){
    int a;
    a=s%10;
    if(s/=10!=0)
        return a+=sum(s/=10);
        return s;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    m=sum(n);
	printf("%d",m);
return 0;
}
