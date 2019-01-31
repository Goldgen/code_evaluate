#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>


int main( ){
    double a[11][5];
    double x;
    srand(time(NULL));
    for(int i=0;i<11;i++){
            a[i][0]=2.0+0.1*i;
            x=a[i][0];
            a[i][1]=1/x;
            a[i][2]=x*x;
            a[i][3]=x*x*x;
            a[i][4]=x*x*x*x;
    }
    for(int i=0;i<11;i++){
        for(int j=0;j<5;j++){
            printf("%.4f",a[i][j]);
            if(j<4)printf(" ");
        }
        printf("\n");
    }
	return 0;
}

