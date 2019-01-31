#include<stdio.h>

int main()
{
    unsigned long long num;
    int move,digit=-1;
    int a_num[10000]={0},b_num[20000]={0};
    int a=1;

    scanf("%llu%d",&num,&move);
    for(unsigned long long i=1,u=num;u!=0;i*=10){
        u=num/i;
        digit++;
    }
    for(int i=1;i<digit;i++)
        a*=10;
    for(int i=0;i<digit;i++,a/=10){
        a_num[i]=num/a;
        num-=(a_num[i]*a);
    }
    move%=digit;
    for(int i=0;i<digit;i++){
        b_num[i+move]=a_num[i];
        if(i+move>digit-1){
            b_num[i+move-digit]=b_num[i+move];
            b_num[i+move]=0;
        }
    }
    printf("%d ",digit);
    for(int i=0;i<digit;i++)
        printf("%d",b_num[i]);
    return 0;
}

