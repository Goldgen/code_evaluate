#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sum=0.0;
    double num[5]={0.0};
    for(int i=0;i<5;i++){
        scanf("%lf",&num[i]);
        printf("%.2lf",num[i]=1.0/num[i]);
        if(i!=4)
            printf(" ");
        sum+=num[i];
    }
    printf("\n%.6lf",sum);
    return 0;
}
