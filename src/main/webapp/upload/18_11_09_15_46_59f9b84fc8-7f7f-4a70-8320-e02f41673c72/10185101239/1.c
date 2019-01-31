#include <stdio.h>
#include <math.h>
int main()
{
    int i;
	int index=0;
    for (i=6;i<=100;i+=10)
    {    if (i%3==0){
			if(index == 0){
				index++;
                printf("%d",i);
			}
			else{
			     printf(" %d",i);}
                     }
    }
	 return 0;
}