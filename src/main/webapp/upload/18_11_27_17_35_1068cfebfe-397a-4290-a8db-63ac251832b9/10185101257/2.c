#include<stdio.h>
#include<math.h>
int main(){
    double data[100],sum=0;
    for(int i=0;i<100;++i){
        data[i]=1.0/((i*2+2)*(i*2+3)*(i*2+4));
        sum+=pow(-1,i)*data[i];
    }
    sum=sum*4.0+3.0;
    printf("%.4lf",sum);
    return 0;
}
