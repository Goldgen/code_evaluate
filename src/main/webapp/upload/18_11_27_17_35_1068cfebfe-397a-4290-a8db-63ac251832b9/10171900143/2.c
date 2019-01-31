#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>



int main( ){
    double a[100];
    double sum=0;
    for (int i=1;i<=100;i++){
        a[i-1]=1.0/(double)(i*2*(i*2+1)*(i+1)*2);
        if (i%2)sum+=a[i-1];
        else sum-=a[i-1];
    }
    sum=sum*4.0+3;
    printf("%.4f",sum);
	return 0;
}

