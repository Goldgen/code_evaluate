#include <stdio.h>


int main()
{
       int i=1,n=0;
       long int sum=1;
       scanf("%d",&n);
       while(i<n)
        {
        i++;
        sum *= i;}

        printf("%ld",sum);
}