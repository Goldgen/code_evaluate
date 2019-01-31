#include <stdio.h>

int main()
{
    double height=100,total_height=100;
    int i=1;
    for(i=1;i<10;i++) 
    {
       height=height*0.5;
       total_height=total_height+height*2.0;
     }
	
     printf("%.3f %.3f",total_height,height*0.5);
   
    return 0;
}