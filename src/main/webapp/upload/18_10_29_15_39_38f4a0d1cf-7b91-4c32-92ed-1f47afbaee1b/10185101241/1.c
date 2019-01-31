#include<stdio.h>

int main()
{
	int a,b,c;
	for(a=1;a<=100;a++)
	{
		for(b=1;b<=100;b++)
		{
			for(c=1;c<=100;c++)
			if((c%3==0)&&(7*a+5*b+c/3==100)&&(a+b+c==100))
			{
				printf("%d %d %d",a,b,c);
				return 0;
			}  
		
		}	
	} 
}
