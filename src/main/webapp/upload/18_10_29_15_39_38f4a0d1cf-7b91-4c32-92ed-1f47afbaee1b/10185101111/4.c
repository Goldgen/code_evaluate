#include <stdio.h>
#include <math.h>
int main()
{
    float grade,min,max,t,m=0.0;
    scanf("%f",&grade);
    min=grade;
    scanf("%f",&grade);
    max=grade;
    if(max<min){
        t=max;
        max=min;
        min=t;
    }
    while(m>=0.0){
        scanf("%f",&grade);
        if(grade<0.0)break;
        m=grade;
        if(grade<min){
            t=grade;
            grade=min;
            min=t;
        }if(grade>max){
            t=grade;
            grade=max;
            max=t;
        }
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
}