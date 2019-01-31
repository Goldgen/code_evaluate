#include<stdio.h>
int main()
{
	int a=1,b=1,c=3;
    for (;a<15;a++)
    {
    	for (b=1;b<20;b++)
    	{
    		for (c=3;c<100;c+=3)
    		{
    			if (a+b+c==100&&7*a+5*b+c/3==100)
    			{
    				goto loop;
				}
			}
		}
	}
loop:	printf ("%d %d %d",a,b,c);
}