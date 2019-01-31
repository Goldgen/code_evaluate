#include<stdio.h>
int main(){
    double a[5],b[5],sum=0;
    for(int i=0;i<5;++i){
        scanf("%lf",&a[i]);
        b[i]=1/a[i];
        sum+=b[i];
    }
    printf("%.2lf %.2lf %.2lf %.2lf %.2lf\n%.6lf",
           b[0],b[1],b[2],b[3],b[4],sum);
    return 0;
}
