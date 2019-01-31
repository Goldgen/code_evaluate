#include <stdio.h>
double data[11][5]={0};



int main(){
	int i=0;
    for(;i<11;i++){
    	data[i][0]=2.0+0.1*i;	
		data[i][1]=1.0/data[i][0];
		data[i][2]=data[i][0]*data[i][0];
		data[i][3]=data[i][0]*data[i][2];
		data[i][4]=data[i][3]*data[i][0];
		printf("%.4lf %.4lf %.4lf %.4lf %.4lf",data[i][0],data[i][1],data[i][2],data[i][3],data[i][4]);	
	    printf("\n");
	}
	
    return 0;
}