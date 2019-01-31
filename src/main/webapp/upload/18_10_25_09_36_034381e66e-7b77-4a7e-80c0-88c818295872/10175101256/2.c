#include <stdio.h>
int main(){
    double a[5],average=0;
    for(int i=0;i<5;i++){
        scanf("%lf",&a[i]);
        average+=a[i];
    }
    printf("%.1f",average/5);
}