#include <stdio.h>
#include <math.h>
int sushu(int a);
int main()
{
    int n;
    scanf("%d",&n);
    sushu(n);
    return 0;
}
int sushu(int a)
{
    int i,b,c,d;
    if(a==1)
        printf("It's not a prime number.");
    if(a!=1)
    {
        d=(int)sqrt((double)a);
        for(i=0,b=2;b<d+1;b++)
        {
            c=a%b;
            if(c==0)
                i++;
        }
        if(i==0)
            printf("It is a prime number.");
        else
            printf("It's not a prime number.");
    }
}
