#include<stdio.h>
double data[11][5];
void solve(){
	
	int i,j;
	data[0][0]=2,data[0][1]=0.5;
	for(i=1;i<11;i++) data[i][0]=data[i-1][0]+0.1,data[i][1]=1.0/data[i][0];
	for(i=0;i<11;i++) data[i][2]=data[i][0]*data[i][0];

	for(j=3;j<5;j++)
	for(i=0;i<11;i++) data[i][j]=data[i][j-1]*data[i][0];
	
	
}
void print(){
	int i,j;
	for(i=0;i<11;i++){
		for(j=0;j<5;j++){
			if(j) printf(" ");
			printf("%.4lf",data[i][j]);
		}
		printf("\n");
	}
}
int main(){
	solve();
	print();
	return 0;
} 