#include <stdio.h>
int main()
{
	for(int i=6;i<100;i+=10)
	{
	    	if(i%3 == 0&& i <90)
				printf("%d ",i);
	        if(i%3 == 0&& i >90)
				printf("%d",i);
		
	}
   return 0;	
}