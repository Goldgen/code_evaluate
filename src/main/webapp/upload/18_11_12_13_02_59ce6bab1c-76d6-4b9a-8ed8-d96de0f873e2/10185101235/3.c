#include<stdio.h>
#include<math.h>
int judger(int);

int main(void)
{
    int n = 0;
    scanf("%d",&n);
    if(judger(n)==0||n==1)
        printf("It's not a prime number.");
    else
        printf("It is a prime number.");
}

int judger(int x)
{
    int i = 2;
    for (;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
