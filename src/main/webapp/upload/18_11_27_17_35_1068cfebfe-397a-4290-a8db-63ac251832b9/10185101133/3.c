#include <stdio.h>
#include <stdlib.h>

int main()
{
    double amounts[5]={0.0};
    long dollars[5]={0};
    long cents[5]={0};
    int i=0;
    while(i<5){
        scanf("%lf",&amounts[i]);
        i++;
    }
    for(i=0;i<5;i++){
        dollars[i]=amounts[i]/1;
        printf("$%ld.",dollars[i]);
          cents[i]=100*amounts[i]-100*dollars[i];
        if(cents[i]<10)
            printf("0%ld",cents[i]);
        else
            printf("%ld",cents[i]);
        if(i!=4)
            printf(" ");
    }
    return 0;
}