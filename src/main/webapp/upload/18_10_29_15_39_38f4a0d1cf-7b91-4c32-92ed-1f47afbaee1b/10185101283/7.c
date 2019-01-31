#include<stdio.h>
#include<math.h>
int main()
{
    long long a;
    long long b =1;
    int i=1;
    int c;
    int d=0;
    scanf("%ld",&a);
    for(;b<=a;++i)
        b=pow(2,i);
    for(int x=1;x<=i;++x)
    {
        c=a&1;
        if(c==1)
            ++d;
        else
            d=d;
        a=a>>1;
    }
    printf("%d",d);
    return 0;
}
