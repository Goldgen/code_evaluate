#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amounts[5];
    int i;
    long dollars[5],cents[5];
    for(i=0;i<5;i++) scanf("%f",&amounts[i]);
    for(i=0;i<5;i++){
        dollars[i]=amounts[i]/1;
        cents[i]=amounts[i]*100;
        cents[i]=(long)cents[i]%100;
        if(cents[i]<10) printf("$%d.0%d",dollars[i],cents[i]);
        if(cents[i]>=10) printf("$%d.%d",dollars[i],cents[i]);
        if(i<4) printf(" ");
    }
    return 0;
}
