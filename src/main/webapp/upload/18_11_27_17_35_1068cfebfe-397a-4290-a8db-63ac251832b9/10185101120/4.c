#include <stdio.h>
#include <math.h>
int main(){
	double data[11][5]={0.0};
	for(int r=0;r<=10;r++){
		for(int l=0;l<=4;l++){
			if(l==0){
			    data[r][l]=2.0+0.1*r;
			    printf("%.4lf ",data[r][l]);
			}
			else if(l==1){
				data[r][l]=1/(2.0+0.1*r);
				printf("%.4lf ",data[r][l]);
			}
			else{
			    data[r][l]=pow((2.0+0.1*r),l);
			    if(l<4)
			    printf("%.4lf ",data[r][l]);
			    else
			    printf("%.4lf\n",data[r][l]);
		    }
		}
	}
}