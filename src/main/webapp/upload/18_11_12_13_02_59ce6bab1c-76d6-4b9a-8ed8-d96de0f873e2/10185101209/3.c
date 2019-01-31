#include<stdio.h>
#include<stdbool.h>

bool pri_num=true;

bool judge(int n){
    for(int i=2; i<(n/2); i++)
        if(n%i == 0)
            pri_num = false;
    return pri_num;
}

int main()
{
    int num=0;

    scanf("%d",&num);
    pri_num=judge(num);
    if(pri_num)
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
    return 0;
}