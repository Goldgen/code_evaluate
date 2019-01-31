#include<stdio.h>
#include<math.h>
int main()
{ 
	long long x,n,n1,m,m1,i,j;
    scanf("%lld%lld",&n,&m);
    n1=n;
    for(i=0;n1!=0;i++)
        n1/=10;
    printf("%lld",i);
    m1=m%i;
    x=(long long)( pow(10,i-1) );
    for(j=0;j<m1;j++)	
        n=n/10+(n%10)*x;
    printf(" %lld",n);
    return 0;
}