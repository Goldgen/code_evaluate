#include<stdio.h>
int a(int);
int main()
{
    a(1);
    return 0;
}
int a(int i)
{
    int n;
    int b;
    scanf("%d",&n);
    if(n>0)
    {
        b=a(i++);
		if(b<=0)printf("%d",n);
		else printf(" %d",n);
    }
    return n;
}
