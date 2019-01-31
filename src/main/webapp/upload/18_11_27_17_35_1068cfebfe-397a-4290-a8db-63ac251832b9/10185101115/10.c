#include <stdio.h>

int main()
{int n;
scanf("%d",&n);
int data[10000];
for(int i=0;i<n;i++){
	scanf("%d",&data[i]);
} 
int tmp;
for(int i=0;i<n-1;i++){
	for(int j=0;j<n-1;j++){
		if(data[j]>data[j+1]){
			tmp=data[j];
			data[j]=data[j+1];
			data[j+1]=tmp;
		}
    }
}
for(int k=0;k<n;k++){
	if(k!=(n-1)){
		printf("%d ",data[k]);
	}
	else{
		printf("%d",data[k]);
	}
}
}