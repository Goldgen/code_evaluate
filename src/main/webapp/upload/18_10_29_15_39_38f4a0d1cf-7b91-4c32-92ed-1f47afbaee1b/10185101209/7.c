#include<stdio.h>

int main()
{
    int num,number[100]={0},count=0;

    scanf("%d",&num);
    for(int i=0;i<100&&num!=0;i++){
        number[i]=num%2;
        num=(num-number[i])/2;
    }
    for(int i=0;i<100;i++){
        if(number[i]==1)
            count++;
    }
    printf("%d",count);
    return 0;
}
