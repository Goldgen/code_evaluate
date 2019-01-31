#include<stdio.h>
#include<math.h>
int result(int);
int main()
{
    int n;
    int j;
    scanf("%d",&n);
    j=result(n);
    if(j==1)
        printf("It is a prime number.");
    if(j==0)
        printf("It's not a prime number.");
    return 0;
}
int result(int x)
{
    int n=0;
    for (int i=2;i<=(int)sqrt(x);++i)
    {
        if (x%i==0) 
            ++n;
    }
    if (n==0&&x!=1)
    return 1;
    else
    return 0;
}