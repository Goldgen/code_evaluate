#include <stdio.h>
#include<math.h>
int prime(int n)
{
    int r=1;
    int k;
    for(k=2;k<n-1;k++){
        if(n%k==0){
            r=0; break;
        }
    }
   return r;
}
int main()
{
    int number;
    scanf("%d",&number);
    if(prime(number))
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
        return 0;
}