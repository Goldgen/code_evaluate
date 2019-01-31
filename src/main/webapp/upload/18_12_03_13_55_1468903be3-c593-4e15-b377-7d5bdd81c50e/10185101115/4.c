#include<stdio.h>


int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[m][n];
	int b[n][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int k=0;k<n;k++){
				b[k][i]=a[i][k];	
			}
	}
	for(int i=0;i<n;i++){
		for(int k=0;k<m;k++){
			if(k==m-1){
				printf("%d\n",b[i][k]);
			}
			else{
				printf("%d ",b[i][k]);
			}
		}
	}
	
} 