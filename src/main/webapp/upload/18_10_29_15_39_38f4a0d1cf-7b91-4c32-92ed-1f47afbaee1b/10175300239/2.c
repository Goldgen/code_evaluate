#include <stdio.h>

int main()
{
    double e=1.0;
    double E=1.0;
    int i,j;
    for(i=1;E>=0.000001;i++){
        E=1.0;
        for(j=1;j<=i;j++)
            E=E/j;
        //printf("%.6f\n",E);
        e+=E;
    }
    printf("%.6f",e);
    return 0;
}