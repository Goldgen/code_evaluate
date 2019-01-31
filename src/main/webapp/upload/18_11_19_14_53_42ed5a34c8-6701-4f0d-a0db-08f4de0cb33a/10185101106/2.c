#include<stdio.h>
int sum(int);
int main()
{   int n;
scanf("%d",&n);
   printf("%d", sum(n));
    return 0;
}
int sum(int x)
{
    int a;
    a = x % 10;
    if(x / 10 == 0)
        return a;
    if(x / 10 != 0)
        return  sum(x/10) + a;
}