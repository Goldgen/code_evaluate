#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool prime(int n)
{int c=1;
    if(n==1)
        c = 0;
    else if(c==2||c==3)
        c = 1;
    else
        for(int m=2;m<sqrt(n);m++)
    {
        if(n%m==0)
            c = 0;
    }
    return (c==1)?true:false;
}
int main()
{
    int t;
    scanf("%d",&t);
    if(prime(t)==true)
        printf("It is a prime number.\n");
    else
        printf("It's not a prime number.\n");
    return 0;
}