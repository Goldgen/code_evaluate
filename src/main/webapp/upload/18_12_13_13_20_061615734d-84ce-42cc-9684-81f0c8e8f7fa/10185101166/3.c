#include<stdio.h>

int convert(int a)
{
	static int i = 0;
	int b = 0;
	int m[80];
	b = a % 10;
	
	if(a)
    {
    	a /= 10;
    	m[i] = b;
    	i++;
    	convert(a);
    	printf("%c",b + '0');
	}
	
}

int main()
{
	int a;
	scanf("%d",&a);
	
	convert(a);
}