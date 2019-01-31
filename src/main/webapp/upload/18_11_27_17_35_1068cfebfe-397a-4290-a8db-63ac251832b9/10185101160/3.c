#include<stdio.h>
#include<string.h>
int main()
{
	float amounts[5];
	long dollars[5],cents[5];
	int i , j , k ;
	for(k = 0 ; k < 5 ; k ++)
		scanf("%f",&amounts[k]);
	for( i = 0 ; i < 5 ; i ++)
	{
		dollars[i] = amounts[i] ;
		cents[i] = (amounts[i] - dollars[i] + 1e-5) * 100;
	}
	printf("$%ld.%02ld",dollars[0],cents[0]);
	for(j = 1 ; j < 5 ; j ++)
		printf(" $%ld.%02ld",dollars[j],cents[j]);
	return 0;
}
