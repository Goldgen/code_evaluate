#include<stdio.h>
#include<math.h>
int ex(long a)
{
    int b=0;
    for(int i=0;a>0;++i)
    {
        b+=(a%10)*pow(8,i);
        a/=10;
    }
    return b;
}
int main()
{
    long a;
    scanf("%ld",&a);
    printf("%d",ex(a));
    return 0;
}
