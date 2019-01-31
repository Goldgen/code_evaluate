#include<stdio.h>
long long gdb(long long m,long long n);
int main()
{
long long a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld\n",gdb(a,b));
}
long long gdb(long long m,long long n)
{
	if(m>n)
		return gdb(m-n,n);
	else if(m<n)
		return gdb(m,n-m);
	else if(m==n)
		return m;
}