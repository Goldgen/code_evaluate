#include<stdio.h>

int main()
{
	int cock, hen, chicken;
	int N = 100;
	for(cock = 1; cock <= N / 7; cock++)
	{
		for(chicken = 1; chicken <= (N - cock) / 3; chicken++)
		{
			hen = N - cock - 3 * chicken;
			if((hen>0)&&(100 == 7 * cock + 5 * hen + chicken))
			printf("%d %d %d",cock,hen,chicken*3);
		}
	}
	return 0;
}