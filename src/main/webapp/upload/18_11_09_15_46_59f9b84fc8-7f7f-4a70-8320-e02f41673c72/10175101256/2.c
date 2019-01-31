#include <stdio.h>
int main(){
    float a[55],x=0;
    a[0]=1,a[1]=1,a[2]=2;
    for(int i=1;i<=50;i++){
        x+=a[i+1]/a[i];
        a[i+2]=a[i+1]+a[i];
    }
    printf("%.2f",x);
}
