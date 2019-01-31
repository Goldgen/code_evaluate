#include<stdio.h>
int main() 
{
	float ave,sum=0,i=0,a;
	scanf ("%f",&a);
	while (a!=-1){
		sum=sum+a;
		i++;
		ave=sum/i;
		printf ("%.2lf\n",ave);
		scanf ("%f",&a);
	}
}