#include <stdio.h>
int main(){
	int i=0,len[1000]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},num=0,max=1;
	scanf("%d",&i);
	getchar();
	int a[1000]={0};
	for(int k=0;k<=i-1;k++){
		scanf("%d",&a[k]);
		if(k>0&&a[k]==a[k-1]){
			len[num]++;
		}
		if(k>0&&a[k]!=a[k-1]){
			num++;
		}
	}
	for(int j=0;j<=num;j++){
		if(len[j]>max){
			max=len[j];
		}
	}
	printf("%d",max);
	return 0;
}