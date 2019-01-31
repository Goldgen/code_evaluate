#include<stdio.h>

int main()
{
    int num,total_num=0,i;
    float average;
    for(i = 0;i < 5;i++){
        scanf("%d",&num);
        total_num+=num;
    }
    average = total_num / 5.0;
    printf("%.1f",average);
}