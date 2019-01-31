#include <stdio.h>
#include <math.h>

int main(){
    int a[100];int b=0;
    for(int i=0;i<8;i++){
        scanf("%d",&a[i]);
        b+=a[i];
    }printf("%d\n",b);
    b=0;
    for(int i=0;i<6;i+=3){
        scanf("%d,%d,%d",&a[i],&a[i+1],&a[i+2]);
        b+=a[i]+a[i+1]+a[i+2];
    }
    scanf("%d,%d",&a[6],&a[7]);
    b+=a[6]+a[7];
    printf("%d",b);
return 0;
}
