#include<stdio.h>
int main(){
	int m,i,j,n,map[100][100]={};
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	for(j=0;j<n;j++) scanf("%d",&map[i][j]);
	
	for(i=0;i<n;i++){
		if(i) printf("\n");
		for(j=0;j<m;j++){
			if(j) printf(" ");
			printf("%d",map[j][i]);
		}
		
	}
	
}