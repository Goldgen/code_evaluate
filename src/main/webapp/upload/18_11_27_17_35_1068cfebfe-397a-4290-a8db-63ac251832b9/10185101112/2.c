#include <stdio.h>
    double data[100];

int main(){
    int i=0,k=0;
    double sum1=0,sum2=0,sum=0;
    for(;i<100;i++){
        data[i]=1.0/((2*i+2)*(2*i+3)*(2*i+4));
    }
    for(;k<100;k=k+2){
        sum1=sum1 + data[k];
    }
    for(int j=1;j<100;j=j+2){
        sum2=sum2+data[j];
    }
    sum=(sum1-sum2)*4+3;
    printf("%.4lf",sum);
    return 0;
}