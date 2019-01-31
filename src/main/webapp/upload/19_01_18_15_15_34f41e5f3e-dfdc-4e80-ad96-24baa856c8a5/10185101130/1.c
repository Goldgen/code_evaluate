#include<stdio.h>

int main(void)
{
	int cock,hen,chicken;
	for(cock=1;cock<=13;++cock)
	{
	  for(hen=1;hen<=20;++hen)
	  {
	    for(chicken=1;chicken<=88;++chicken)
	    {
            if(cock+hen+chicken==100&&7*cock+5*hen+chicken/3==100&&chicken%3==0)
              printf("%d %d %d",cock,hen,chicken);
         }
	   }
	} 
    return 0;
}