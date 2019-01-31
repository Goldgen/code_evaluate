#include <stdio.h>
#include <math.h>
int main(void)
{
    float amounts[5];
    long dollars[5],cents[5];
    int i=0;
    for(;i<5;i++){
        scanf("%f",&amounts[i]);
        dollars[i]=(long)amounts[i];
        cents[i]=(long)((amounts[i]-dollars[i]+0.00001)*100);
    }
    for(i=0;i<4;i++){
        if(cents[i]==0) printf("$%ld.00 ",dollars[i]);
        else printf("$%ld.%ld ",dollars[i],cents[i]);
    }
    if(cents[i]==0) printf("$%ld.00",dollars[i]);
    else printf("$%ld.%ld",dollars[i],cents[i]);
    return 0;
}



