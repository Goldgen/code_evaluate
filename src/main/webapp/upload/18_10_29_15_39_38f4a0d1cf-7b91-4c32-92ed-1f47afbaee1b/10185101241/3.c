#include<stdio.h>
 
int main()
{
	int x,y,z;
 	int i,j;
 	scanf("%d",&x);
 	printf("%d",x);
  	for(y=1;y<=x/2;y++)
 	{
	 	for(i=2;i<y;i++)
 			if(y%i==0) break;
 		if(i==y)
 		{	  
		 	z=x-y;
 		   	for(j=2;j<=z;j++)
				if(z%j==0) break;
 			if(j==z) printf("=%d+%d",y,z);
		}
    }
}