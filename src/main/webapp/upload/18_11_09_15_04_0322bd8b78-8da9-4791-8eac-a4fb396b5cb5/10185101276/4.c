#include <stdio.h>
int main()
{
     unsigned long long int a=1;
     int n;
     scanf("%d",&n);
     for (;n>=2;n--)
	 {
        a*=n;
		a%=20181111;
	 }
     printf("%lld",a);
     return 0;
}
