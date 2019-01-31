#include<stdio.h>
int main(void)
{
	double e=1,n=1;
	int i;
	for(i=1;n<1E6;i++)
    {
        n*=i;
        e+=1/n;
    }
	printf("%.6f",e);
	return 0;
}
