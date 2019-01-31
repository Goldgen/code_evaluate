#include <stdio.h>
#include <math.h>
int main(){
    double data[11][5];
    for(int i=0;i<11;++i){
        data[i][0]=2.0+0.1*i;
    }
    for(int j=0;j<11;++j){
        data[j][1]=1.0/data[j][0];
        data[j][2]=pow(data[j][0],2);
        data[j][3]=pow(data[j][0],3);
        data[j][4]=pow(data[j][0],4);
        for(int k=0;k<5;++k){
            printf("%.4lf",data[j][k]);
            if(k<4)
                printf(" ");
        }
        if(j<10)
            printf("\n");
    }
    return 0;
}
