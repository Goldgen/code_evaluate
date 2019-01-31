#include <stdio.h>

int main(){
    float avera,number,sum;
    int i;
    number = 0;
    for(i=1;number!=-1;++i){
        scanf("%f",&number);
            if(number==-1)break;
        sum+=number;
        avera = (float)sum/i;
        printf("%.2f\n",avera);
    }
return 0;

}