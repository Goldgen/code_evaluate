#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>



int main( ){
    double a[5],b[5];
    double sum=0;
    for(int i=0;i<5;i++){
        scanf("%lf",&a[i]);
        b[i]=1/a[i];
        printf("%.2f",b[i]);
        if (i<4)printf(" ");
        sum+=b[i];
    }
    printf("\n%.6f",sum);
	return 0;
}

