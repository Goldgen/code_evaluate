#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long a,b,m,n,c;
	scanf ("%llu %llu",&a,&b);
	m=a;
	for (n=1;a/10;a/=10,n++);
	a=m;
	b%=n;
	c=pow(10,n-1);
    while (b)
    {
    	m=a%10;
        a=a/10+m*c;
    	b--;
	}
	printf ("%llu %llu",n,a);
}