#include <bits/stdc++.h>
using namespace std;
int main(){
	double data[11][5];
	double add=2;
	for(int i=0;i<=10;i++)
		data[i][0]=add,add+=0.1;
	for(int i=0;i<=10;i++){
		double x=data[i][0];
		data[i][1]=1/x;
		data[i][2]=x*x;
		data[i][3]=x*x*x;
		data[i][4]=x*x*x*x;
	}
	for(int i=0;i<=10;i++){
		for(int j=0;j<5;j++){
			printf("%.4lf",data[i][j]);
			if(j==4)
				printf("\n");
			else printf(" ");
		}
	//	if(i!=10)
		//	printf("\n");
	}
	return 0;
}
