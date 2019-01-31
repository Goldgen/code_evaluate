#include <stdio.h>
#include <math.h>

char* i2a(char *p,int n)
{
    if(n==0)
		return p;
	*(p+(int)log10(n))=n%10+'0';
    return i2a(p,n/10);
}

int main()
{
    int n;
	char p[300]={0};
    scanf("%d",&n);
	printf("%s",i2a(p,n));
    return 0;
}
