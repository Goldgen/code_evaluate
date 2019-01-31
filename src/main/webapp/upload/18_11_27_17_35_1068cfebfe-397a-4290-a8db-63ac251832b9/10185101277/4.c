#include<stdio.h>
#include<string.h>
#define N 1000

int main()
{
    double a[11][5];
    int i,j;
    a[0][0]=2.0;
    for(j=1;j<11;j++){
        a[j][0]=a[j-1][0]+0.1;
    }
    for(j=0;j<11;j++){
        a[j][1]=1/(a[j][0]);
        a[j][2]=(a[j][0])*(a[j][0]);
        a[j][3]=(a[j][2])*(a[j][0]);
        a[j][4]=(a[j][2])*(a[j][2]);
    }
    for(j=0;j<10;j++){
        for(i=0;i<4;i++){
            printf("%.4f ",a[j][i]);
        }
        printf("%.4f\n",a[j][i]);
    }
    for(i=0;i<4;i++){
            printf("%.4f ",a[j][i]);
        }
    printf("%.4f",a[j][i]);

}
