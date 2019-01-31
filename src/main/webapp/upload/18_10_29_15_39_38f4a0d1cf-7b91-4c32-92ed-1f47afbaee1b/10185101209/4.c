#include<stdio.h>

int main()
{
    float grades[100]={0},max=0.0,min=100.0;

    for(int i=0;i<100;i++){
        scanf("%f",&grades[i]);
        if(grades[i]<0)
            break;
        if(max<grades[i])
            max=grades[i];
        if(min>grades[i])
            min=grades[i];
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}