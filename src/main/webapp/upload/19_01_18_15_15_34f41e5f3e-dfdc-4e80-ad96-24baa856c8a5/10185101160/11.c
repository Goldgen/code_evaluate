#include <stdio.h>
	int i,j,a,b,c,I;
void num()//计算个十百位立方和 
{
		c = (i%100) % 10;
   		b = ( (i-c) % 100 )/10;
   		a = ( i - 10*b - c)/100;
   		I = a*a*a + b*b*b + c*c*c;
}
int main()
{
 	
 	for(i=100;i<1000;i++)//输出第一个水仙花数 
 	{
   	    num(); 
   		if(i==I)
   		{
		   	printf("%d",i);
   			i+=1;
			break;		
   		} 
   	}
   	for(i=i+1;i<1000;i++)//输出其他水仙花数 
 	{
   		num();
   		if(i==I)
   				printf(" %d",i);
 	} 
 	return 0;
}