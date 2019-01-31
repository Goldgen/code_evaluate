#include <stdio.h>

int main()
{int n;
int k=1;
scanf("%d",&n);
int data[10000]={0}; 
for(int i=0;i<n;i++){
	scanf("%d",&data[i]);
}
for(int i=1;i<n;i++){
	if(data[i]==data[i-k]){
		k++;
	}
}
	printf("%d",k);
}