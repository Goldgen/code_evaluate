#include<stdio.h>
#include<math.h>
int main()
{
	int s,i,j,k,a;
	scanf("%d",&s);
	printf("%d",s);
	for(i=3;i<=s/2;i=i+2)
	{
		k=0,a=3;
		j=s-i;
		while(a<10)
		{
			if(i%a==0&&i!=a)k=1;
			if(k)break;
			a=a+2;
		}
		a=3;
		while(a<10)
		{
			if(j%a==0&&j!=a)k=1;
			if(k)break;
			a=a+2;
		}
		if(k==0)
		printf("=%d+%d",i,j);
	}
	return 0;
} 

