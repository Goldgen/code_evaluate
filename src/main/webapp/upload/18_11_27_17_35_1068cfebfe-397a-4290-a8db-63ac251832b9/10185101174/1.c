#include <stdio.h>
#include <stdlib.h>

int main()
{
    double total;
    double number[30];
    int i=0;
    double a;
    for(int q=0;q<5;q++){
        scanf("%lf",&a);
        number[i]=a;
        i++;
        getchar();
        }

    for(int j=0;j<i;j++){
        if(j==i-1){
            printf("%.2f",1.0/number[j]);
            total+=1.0/number[j];
        }
        else{
            printf("%.2f ",1.0/number[j]);
            total+=1.0/number[j];
        }
    }
    printf("\n%.6f",total);


}