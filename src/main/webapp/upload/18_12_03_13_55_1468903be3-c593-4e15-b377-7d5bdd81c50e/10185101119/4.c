#include <stdio.h>
#include <string.h>
int main(){
	int a[50][50]={0},row,line;
	scanf("%d %d",&row,&line);
	for(int i=0;i<row;i++){
		for(int j=0;j<line;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int j=0;j<line;j++){
		for(int i=0;i<row;i++){
			if(i==row-1)
			printf("%d",a[i][j]);
			else
			printf("%d ",a[i][j]);
		}
		if(j<line-1)
		printf("\n");
	}
	return 0;
}