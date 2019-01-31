#include<stdio.h>
#include<math.h>

int m(long long int c)
{
		int a , d = 0;
		for(int i = 0;c != 0;c = c / 10,i++)
	{
		a = c % 10;
		d = d + a * pow(8,i);
    }
    return d;
}

int main()
{
	
	long long int c;
	scanf("%lld",&c);
	printf("%lld",m(c));

}