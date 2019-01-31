#include <stdio.h>

int main()
{double data[11][5];
for(int i=0;i<11;i++){
	data[i][0]=2.0+0.1*i;
} 
for(int k=0;k<11;k++){
	data[k][1]=1/data[k][0];
	data[k][2]=data[k][0]*data[k][0];
	data[k][3]=data[k][0]*data[k][0]*data[k][0];
	data[k][4]=data[k][0]*data[k][0]*data[k][0]*data[k][0];
}
for(int i=0;i<11;i++){
		printf("%.4lf %.4lf %.4lf %.4lf %.4lf\n",data[i][0],data[i][1],data[i][2],data[i][3],data[i][4]);}

}