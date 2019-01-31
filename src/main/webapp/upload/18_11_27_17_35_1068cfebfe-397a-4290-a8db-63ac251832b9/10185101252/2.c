#include <stdio.h>

double data[105];

int main(){

    for(int i = 0; i < 100; i++){
        int a = 1;
        for(int j = 2*i+2; j <= 2*i+4; j++){
            a *= j;
        }
        data[i] = 1/((double)a);
    }
    double result = 0;
    for(int i = 0, j = 1; i < 100; i++,j*=-1){
        result += j*data[i];
    }
    printf("%.4f", result*4+3);

    return 0;
}
