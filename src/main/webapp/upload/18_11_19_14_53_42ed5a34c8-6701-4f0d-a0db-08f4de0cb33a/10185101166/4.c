#include<stdio.h>
void m(int a)
{
	int b;
	if(a != 0)
	{
		b = a % 2;
		m(a / 2);
		printf("%d",b);
	}
    
}

int main()
{
	int a;
	scanf("%d",&a);
    m(a);
}