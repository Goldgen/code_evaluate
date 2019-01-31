#include <stdio.h>
#include <stdlib.h>
int arr[5];

int cmp(const void * a, const void * b){
	return *(int*)b - *(int*)a;
}

int main(){
	
	for(int i = 0; i < 4; i++)
		scanf("%d", &arr[i]); 
	
	qsort(arr, 4, sizeof(int), cmp);
	printf("%d", arr[0]);
	return 0;
}