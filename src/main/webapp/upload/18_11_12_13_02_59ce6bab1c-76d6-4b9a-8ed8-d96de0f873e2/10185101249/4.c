#include <stdio.h>
#include <math.h>
long long jinzhi(long long a){
    int i=0,n=0;
    while(a!=0){
            n++;
            i+=a%10*pow(8,n-1);
            a/=10;
    }
    return i;
}
int main()
{
    long long a,b;
    scanf("%lld",&a);
	b=jinzhi(a);
	printf("%lld",b);
return 0;
}
