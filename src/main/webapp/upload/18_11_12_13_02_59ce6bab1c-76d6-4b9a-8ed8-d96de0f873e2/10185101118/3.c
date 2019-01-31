#include<stdio.h>
#include<math.h>
void su(int);
int main()
{
    int n;
    scanf("%d",&n);
    su(n);
    return 0;
}
void su(int x)
{
    int i=2;
    for(i=2;i<=(int)sqrt(x);i++)
        if(x%i==0)break;
    if(i>(int)sqrt(x))printf("It is a prime number.");
    else printf("It's not a prime number.");
}