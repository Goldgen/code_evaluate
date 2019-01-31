#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isprime(int a)
{
    bool flag = false;
    if (a == 2)
        return true;
    for(int i = 2;i <= round(sqrt(a));i++)
    {
        if(a % i == 0)
            break;
        else if(i == round(sqrt(a)))
            flag = true;
    }
    return flag;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    if(isprime(n))
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
    return 0;
}
