#include<stdio.h>

int tran(int);
int dig[100] = {0};

int main(void)
{
    int a = 0;
    scanf("%d",&a);
    tran(a);
}

int tran(int a)
{
    static int i = 0;
    if(a != 0)
    {
        dig[i] = a%2;
        a /= 2;
        i++;
        tran(a);
    }
    for(i-=1;i>=0;i--)
        printf("%d",dig[i]);
}
