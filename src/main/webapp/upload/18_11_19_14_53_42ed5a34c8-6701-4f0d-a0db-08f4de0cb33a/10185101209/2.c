#include<stdio.h>

int function(int, int);
long long pow(int, int);

int main()
{
    int num=0, digit=-1;

    scanf("%d",&num);
    for(int i=1, j=1; j != 0; i*=10){
        j = num/i;
        digit++;
    }
    printf("%d",function(num, digit));
    return 0;
}

long long pow(int x, int y){
    long long n=1;
    for(; y>0; y--)
        n *= x;
    return n;
}

int function(int num, int digit){
    if(digit == 1)
        return num;
    return num/pow(10,digit-1)+function(num-num/pow(10,digit-1)*pow(10,digit-1),digit-1);
}
