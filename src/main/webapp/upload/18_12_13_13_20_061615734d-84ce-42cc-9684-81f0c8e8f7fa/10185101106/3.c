#include<stdio.h>
#include <math.h>

char* i2a(char *p,int n)
{
    if(n==0)
		return p;
		int l;
		l = (int)log10(n);
	*(p+l)=n%10+'0';
    return i2a(p,n/10);
}
char p[300];
int main()
{
    int n;
    scanf("%d",&n);
    char *k;
    k = i2a(p,n);
	printf("%s",k);
    return 0;
}
