#include <stdio.h>
#include <stdlib.h>
int arr[5];

int cmp(const void * a, const void * b){
	return *(int*)b - *(int*)a;
}

int main(){
	
	for(int i = 0; i < 3; i++)
		scanf("%d", &arr[i]); 
	
	qsort(arr, 3, sizeof(int), cmp);
	printf("%d", arr[1]);
	return 0;
}