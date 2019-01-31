#include <stdio.h>

int main(void) {
    float a,b=0.0;
    float max=0.0;
    float min=0.0;
    scanf("%f",&a);
    max=a;
    min=a;
    if(a>=0){
        do{
            scanf("%f",&b);
            if(b>max){
                max=b;
            }
            else if(b<0){
                break;
            }
            else if(b<min){
                min=b;
            }
        }
        while(b>=0);
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}

