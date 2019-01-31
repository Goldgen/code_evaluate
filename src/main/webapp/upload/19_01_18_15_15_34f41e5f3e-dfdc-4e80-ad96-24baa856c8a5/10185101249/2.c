#include <stdio.h>
int main()
{
    int a,b;
	long long m;
    m=1LL;
    a=0;
    double n,s;
    n=1;
    s=1;
    while(n>=1e-6)
    {
    a+=1;
        for(b=1;b<=a;b++)
        {
            m*=b;
        }
    n=1.0/m;
    s+=n;
    m=1LL;
    }
    printf("%.6f",s);
    return 0;
}
