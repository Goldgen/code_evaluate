#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,sum,flag=0,x=0;
	scanf("%d+%d=%d",&a,&b,&sum);
	for(int i=1;i<=20;i++)
	{
		if(a*pow(10,i)+b==sum)
		{
			flag=1;
			x=i;
			break;
		}
	}
	if(flag==0)
	{
	
	for(int i=1;i<=20;i++)
	{
		if(a+b*pow(10,i)==sum)
		{
			x=-i;
			break;
			
		}
	}
 }
 printf("%d",x);
 return 0;
  }