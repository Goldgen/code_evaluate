#include<stdio.h>
int main()
{
	int a,zm,j,ps,kgs,zms;
	scanf("%d",&a);
	zm=64;
	for(ps=1;ps<=a;ps++)
	{zm=zm+1;
		for(kgs=1;kgs<=a-ps;kgs++)
		{
			printf(" ");
		}
		for(zms=1;zms<=2*ps-1;zms++)
	    {
		printf("%c",zm);
    	}
    	printf("\n");
}
for(ps=ps-1;ps>=1;ps--)
{
	zm=zm+1;
	for(kgs=a-ps+1;kgs>=1;kgs--)
		{
			printf(" ");
		}
		for(zms=2*ps-3;zms>=1;zms--)
	    {
		printf("%c",zm);
    	}
    	if(ps>2)
    	printf("\n");
    	else 
    	continue;
}
	
return 0;
	
 } 