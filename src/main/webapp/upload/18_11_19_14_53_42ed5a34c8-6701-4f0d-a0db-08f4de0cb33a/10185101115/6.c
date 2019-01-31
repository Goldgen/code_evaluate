#include <stdio.h>
#include <stdlib.h>

int f(int);

int main()
{
int n;
int a;
scanf("%d",&n);
a=f(n);
printf("%d",a);
}

int f(int n)
{
if((n==1)||(n==2))
{
    return 1;
}
else
{
    return f(n-1)+f(n-2);
}
}