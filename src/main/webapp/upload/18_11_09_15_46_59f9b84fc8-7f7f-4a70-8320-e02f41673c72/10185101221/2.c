#include <stdio.h>
int main()
{
	double arr[50];
	double sum = 0;
	arr[0]=2;
	arr[1]=3;
	for(int i=2;i<50;i++)
	  {
	    arr[i] = arr[i-1] + arr[i-2];
	  }
	for(int j=0;j<49;j++)
	  {
	    sum += arr[j+1] / arr[j];
	  }
	sum = sum + 2;
	printf("%.2lf",sum);
   return 0;
}
