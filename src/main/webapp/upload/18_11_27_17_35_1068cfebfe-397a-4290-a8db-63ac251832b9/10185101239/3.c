#include <stdio.h>
int main()
{
	int i;
	int index = 1;
	float amounts[5];
	long doller[5];
	long cents[5];
	for (i = 0; i<5; i++)
		scanf("%f", &amounts[i]);
	for (i = 0; i<5; i++) {
		doller[i] = (long)(amounts[i] * 100) / 100;
		cents[i] = (long)(amounts[i] * 100) % 100;
		if (index==1){
		 index++;
         printf("$%ld.%.2ld",doller[i],cents[i]);
	}
	 else
     {
         printf(" $%ld.%.2ld",doller[i],cents[i]);
      }
	}
	return 0;
}
