#include <stdio.h>
void sum(long long int);
int main()
{long long int a=0;
scanf("%lld",&a);
sum(a);
}
void sum(long long int m){
long long int n;
n=m;
scanf("%lld",&m);
if(m>0)
{sum(m);
printf(" %lld",n);}
else{printf("%lld",n);}
}