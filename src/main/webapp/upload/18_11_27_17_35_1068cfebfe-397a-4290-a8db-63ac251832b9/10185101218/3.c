#include <stdio.h>
#include<math.h>

int main(void){
    double amounts[5] = {0};
    long dollars[5] = {0};
    long cents[5] = {0};
    int n = 0,spc = 0,test = 0;
    double test2 = 0.0;
    scanf("%lf %lf %lf %lf %lf",&amounts[0],&amounts[1],&amounts[2],&amounts[3],&amounts[4]);
    for(;n < 5;n++){
        dollars[n] = (int)amounts[n];
        test2 = (amounts[n] - dollars[n]) * 100000;
        test = (int)test2;
        test = test % 10;
        if(test==9)
            spc = (int)((amounts[n] + 0.00001) * 100);
        else
            spc = (int)((amounts[n]) * 100);
        cents[n] = spc % 100;
        if(n!=4)
            printf("$%ld.%ld ",dollars[n],cents[n]);
        else
            printf("$%ld.%ld",dollars[n],cents[n]);
    }
    return 0;
}
