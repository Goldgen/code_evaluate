#include <stdio.h>

int main(void) {
    int count = 1,n = 1;
    double e = 1.0;
    long long int E = 1;
    for(count = 1;E<=1E6;count++){
        E=1;
        for(;n<=count;n++){
            E*=n;
        }
        e+=1.0/E;
        n=1;
        
    }
    printf("%.6lf",e);
    return 0;
}

