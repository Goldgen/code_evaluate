#include<stdio.h>
#include<float.h>
#include<math.h>
int main(void)
{
	double score;
	double high,low;
	high = DBL_MIN;
	low = DBL_MAX;
	scanf("%lf",&score);
	while(score>=0)
	{
        if(score>high&&fabs(score-high)>1e-6)
            high = score;
		if(score<low&&fabs(score-low)>1e-6)
            low = score;
		scanf("%lf",&score);
	}
	printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",high,low);
	return 0;
}
