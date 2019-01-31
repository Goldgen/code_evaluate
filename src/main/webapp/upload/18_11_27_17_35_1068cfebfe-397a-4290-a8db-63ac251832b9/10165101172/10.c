#include <stdio.h>

int cmp(const void* a,const void* b){
	return *(int *)a - *(int *)b;
}

int main(void){
	int* array = (int *)malloc(sizeof(int)*1000);
	int i,T;
	scanf("%d",&T);
	for (i = 0;i < T;i++){
		scanf("%d",&array[i]);
	}
	qsort(array,T,sizeof(int),cmp);
	for (i = 0;i < T;i++){
		printf("%d",array[i]);
		if (i != T - 1)
			printf(" ");
	}
	return 0;
}