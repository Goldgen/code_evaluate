#include <stdio.h>
int arr[100];
int main(int argc,char* argv[]){
	
	int index  = 0;
	for(int i = 1; i < 10; i++)
		for(int j = 0; j < 10; j++)
			for(int k = 0; k < 10; k++)
				if(i*100 + j*10 + k == i*i*i + j*j*j + k*k*k)
					arr[index++] =  i*100 + j*10 + k;
	for(int i = 0; i < index - 1; i++)
		printf("%d ", arr[i]);
	printf("%d", arr[index-1]);

	return 0;
} 