#include <stdio.h>
#include <stdlib.h>

int main()
{
long long int a,k=1,n,i;
scanf("%lld",&n);
if((n>=1)||(n<=100))	
{for(i=2;i<=n;i++)
 k*=i;
 a=k%20181111;
 printf("%lld",a);}
else if(n=0){
	   k=1;
	   a=k%20181111;
       printf("%lld",a);}
return 0;
}
