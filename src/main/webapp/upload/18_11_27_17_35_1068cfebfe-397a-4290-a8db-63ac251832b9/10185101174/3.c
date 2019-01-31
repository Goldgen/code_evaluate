#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float amounts[5];
  
    for(int i=0; i<5; i++){
        scanf("%f",&amounts[i]);

    }
    for(int j=0; j<5 ;j++){
        if(j==4)
            printf("$%.2f",amounts[j]-0.0045);
        else
            printf("$%.2f ",amounts[j]-0.0045);
}
}
