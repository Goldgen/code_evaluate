#include<stdio.h>
int main()
{
	int sum1=0;
	int sum2=0;
	int i;
	for(i=1;i<=100;++i)
    {
	   if(i%2==0)
	     sum1+=i;
	   else
         sum2+=i;
	}
	printf("%d %d",sum2,sum1);
		return 0;
}
