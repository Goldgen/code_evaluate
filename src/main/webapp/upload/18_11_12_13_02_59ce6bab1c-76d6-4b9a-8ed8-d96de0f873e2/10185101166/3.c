#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,c,d,e=0;
	double b;
	scanf("%d",&a);
	b = (double)sqrt(a);
    c = (double)b + 0.5;
    for(i = 2;i <= c;i++)
    {
    	d = a % i;
    	if(d==0)
    	{
    		e=1;
		}
	}
    switch(e)
    {
    	case 0:printf("It is a prime number.");
			break;
    	case 1:printf("It's not a prime number.");
		break;
	}
	
}