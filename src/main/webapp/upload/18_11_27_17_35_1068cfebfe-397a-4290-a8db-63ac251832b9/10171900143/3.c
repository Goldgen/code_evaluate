#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>


int main( ){
    double a[5];
    for (int i=0;i<5;i++){
    scanf("%lf",&a[i]);
    a[i]*=100;
    a[i]=floor(a[i]);
    a[i]/=100;
    printf("$%.2f",a[i]);
    if (i<4)printf(" ");
    }
	return 0;
}

