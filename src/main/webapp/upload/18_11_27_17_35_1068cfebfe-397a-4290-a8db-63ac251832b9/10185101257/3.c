#include<stdio.h>
#include<math.h>
int main(){
    double amounts[5];
    long dollars[5],cents[5];
    for(int i=0;i<5;++i){
        scanf("%lf",&amounts[i]);
        dollars[i]=(long)amounts[i];
        cents[i]=(long)(amounts[i]*100)%100;
    }
    for(int j=0;j<5;++j){
        printf("$%ld.%02ld",dollars[j],cents[j]);
        if(j<4)
            printf(" ");
    }
    return 0;
}
