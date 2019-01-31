#include<stdio.h>

int main()
{
    int num1[5]={0},i=0;
    double num2[5]={0.0},sum=0.0;

    for(; i<5; i++){
        scanf("%u",&num1[i]);
        num2[i]=1.0/(double)num1[i];
        sum+=num2[i];
    }
    for(i=0; i<5; i++){
        if(i!=0)
            printf(" ");
        printf("%.2f",num2[i]);
    }
    printf("\n%.6f",sum);
    return 0;
}