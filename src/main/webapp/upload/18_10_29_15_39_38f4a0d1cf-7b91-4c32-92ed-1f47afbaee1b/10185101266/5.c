#include<stdio.h>
int main ()
{
    int i,j,sum_1=0,sum_2=0;
    for(i=1;i<=100;i=i+2)
    {
       sum_1=sum_1+i;
    }
	for(j=2;j<=100;j=j+2)
	{
		sum_2=sum_2+j;
	}
     printf("%d %d",sum_1,sum_2);
     return 0;
}
