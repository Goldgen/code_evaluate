#include<stdio.h>
int main(void)
{
	float a,b,i=1,sum=0;
	while(scanf("%f",&a)!=EOF&&a!=-1)
    {
        sum+=a;
        b=sum/i;
        printf("%.2f\n",b);
        i++;
    }
	return 0;
}