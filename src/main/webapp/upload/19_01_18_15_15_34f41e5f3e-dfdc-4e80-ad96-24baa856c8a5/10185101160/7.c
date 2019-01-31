#include <stdio.h>	
int main()
{
	unsigned int a;
	int b;
	int sum=0;
	scanf("%u",&a);  
	while(a>0)
	{
		b=a&(-a);//求最低位1 
		if(b>0)
		sum+=1;
		a=a*0.5/b;
	}
	printf("%d",sum);
	return 0;	
}
		