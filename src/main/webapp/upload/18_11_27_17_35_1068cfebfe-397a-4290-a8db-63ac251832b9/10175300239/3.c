#include <stdio.h>

const long double eps = 1e-12;
int main()
{
    double amounts[5];
    long dollars[5],cents[5];
    int i;
    for(i=0;i<5;i++){
        scanf("%lf",&amounts[i]);
        dollars[i]=amounts[i];
        cents[i]=(amounts[i]-dollars[i]+eps)*100.0;
    }
    for(i=0;i<4;i++)
        printf("$%d.%02d ",dollars[i],cents[i]);
    printf("$%d.%02d",dollars[i],cents[i]);
    return 0;
}
