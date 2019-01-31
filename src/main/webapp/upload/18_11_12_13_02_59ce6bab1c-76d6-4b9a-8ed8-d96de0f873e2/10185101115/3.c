#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void su(int n)
{
    int k=0;
    for(int i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0)
        {
            k++;
        }
    }
        if((k>0)||(n==1))
    {
        printf("It's not a prime number.");
    }
        else
    {
        printf("It is a prime number.");
    }

}

int main()
{
    int n;
    scanf("%d",&n);
    su(n);
    return 0;
}