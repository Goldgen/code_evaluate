#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,j;
    a=1;
    b=2;
    i=j=0;
    while(a<=99)
    {
     i=i+a;
     a=a+2;
        }
    while(b<=100)
    {
    	j=j+b;
		b=b+2; 
	}
         printf("%d %d",i,j);

    


    return 0;
}
