#include <stdio.h>
#include <math.h>
int main()
{
	double  amounts[5];
	long dollars[5];
	long cents[5];
	for(int i=0;i<5;i++)
	{
	    scanf("%lf",&amounts[i]);
	    dollars[i]=amounts[i];
	    cents[i]=(amounts[i]*10000-dollars[i]*10000)/100;
	}
	for(int i=0;i<5;i++)
    {
        if(cents[i]<10)
        {
            if(i==4)
           printf("$%ld.0%ld",dollars[i],cents[i]);
        else
           printf("$%ld.0%ld ",dollars[i],cents[i]);
        }
        else{
        if(i==4)
           printf("$%ld.%ld",dollars[i],cents[i]);
        else
           printf("$%ld.%ld ",dollars[i],cents[i]);
        }
    }
   return 0;
}