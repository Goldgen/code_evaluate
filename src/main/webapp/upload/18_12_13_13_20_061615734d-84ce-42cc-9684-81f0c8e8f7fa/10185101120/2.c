#include<stdio.h>
int main()
{
	char a[85];
	char *b,*c;
	int x;
	fgets(a,85,stdin);
	scanf("%d",&x);
	b=a;
    c=(b+x);
	printf ("%s",c);
}