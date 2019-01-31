#include <stdio.h>
int main(){
    int n,move,ch;
    scanf("%d %d",&n,&move);
    getchar();
    int num[10]={0},put[10]={0},i=0;
    do{
        scanf("%d",&num[i]);
        i++;
	}while((ch=getchar())!='\n');
	for(int j=0;j<n;j++){
		if(j+1<=n-move){
			put[j+move]=num[j];
		}
		else{
			put[j-(n-move)]=num[j];
		}
	}
	for(int j=0;j<n;j++){
		if(j==n-1){
			printf("%d",put[j]);
		}
		else{
			printf("%d ",put[j]);
		}	
	}
	return 0;
}