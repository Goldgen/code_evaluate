#include<stdio.h>
#include<math.h> 

int main(void)
{
	double m;
	int    n,s,k;
	int    i=0;
	scanf("%lf %d",&m,&n);
	double a=m;
	do
	{
		a=a/10.0;
		i++;
	}while(a>1);
	printf("%d ",i);
	k=n%i;
	int b=(int)m;
	for(int j=1;j<=k;++j)
	{
		b=b/10;
	}
	int    num1=pow(10,k);
	int    num2=pow(10,(i-k));
	s=(m-b*num1)*num2;
	printf("%d",s+b);
	return 0;
 } 