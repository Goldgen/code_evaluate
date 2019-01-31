#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sum=0.0;
	double number[5];
	scanf("%lf %lf %lf %lf %lf",&number[0],&number[2],&number[3],&number[4],&number[1]);

	for(int count=0;count<5;++count)
	{
	sum=sum+number[count];
	}
    printf("%.1lf",sum/5);
    return 0;
}
