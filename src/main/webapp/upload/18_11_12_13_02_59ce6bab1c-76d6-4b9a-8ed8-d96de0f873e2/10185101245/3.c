#include <stdio.h>
#include <stdlib.h>
#include<math.h>
    int isprime(int n)
    {
        if(n<=1)
         return 0;
        else if(n==2||n==3)
            return 1;
        else if(n>3)
        {
            for(int i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                    return 0;
            }
            return 1;
        }
    }
    int main()
    {
        int m;
        scanf("%d",&m);
        if(isprime(m)==1)
            printf("It is a prime number.");
        else
            printf("It's not a prime number.");
    }
