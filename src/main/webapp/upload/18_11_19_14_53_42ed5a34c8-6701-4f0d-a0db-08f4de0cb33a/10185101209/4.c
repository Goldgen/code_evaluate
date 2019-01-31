#include<stdio.h>
#include<stdbool.h>

void Func(int);
int num[1000]={0},i=0;

int main()
{
    int n;

    scanf("%d",&n);
    Func(n);
    for(;i > 0; i--)
        printf("%d",num[i-1]);
    return 0;
}

void Func(int n){
    if(n!=0){
        num[i] = n%2;
        i++;
        return Func(n/2);
    }
}