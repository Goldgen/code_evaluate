	#include<stdio.h>
	
	void x(int );
	int main()
	{
		x(1);
		return 0;
	}
	
	
	void x(int b)
	{
		int a;
		scanf("%d",&a);
		
		if(a>0)
		{ b++;
		x(b);
			printf("%d",a);
		if(b>2)
		printf(" ");
	
		
		}
		
	}
	 