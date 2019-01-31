#include<stdio.h>
#define SIZE 5

int i;
int main(){
    double s[SIZE];
    double b[SIZE];
    for(i=0;i<SIZE-1;i++){
        scanf("%lf",&s[i]);
        b[i]=1.0/s[i];
        printf("%.2lf ",b[i]);
    }
    scanf("%lf",&s[i]);
        b[i]=1.0/s[i];
        printf("%.2f\n",b[i]);
    printf("%.6f",b[0]+b[1]+b[2]+b[3]+b[4]);
    return 0;
}
